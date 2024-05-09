// PUT POWERTRAIN 09.05.2024
// DRONE DYNAMOMETER PROGRAM
// DESIGNED FOR ARDUINO GIGA R1 MAINCORE


//LIBRARIES
#include <string>
#include <WiFi.h> // WiFi


//WiFi SETUP
const char* ssid = "TP-Link_33DD"; //WiFi NAME
const char* password = "03215111"; //PASSWORD
WiFiServer server(12345);
WiFiClient client;


//SENSORS DEFINITION
//IR SENSORS
#define IR_SENSOR_M1 1
#define IR_SENSOR_M2 2
#define IR_SENSOR_M3 3
#define IR_SENSOR_M4 4
//TEMPERATURE SENSORS (LM35DZ)
#define TEMP_SENSOR_AMBIENT A2
#define TEMP_SENSOR_BATTERY A4
//CURRENT SENSORS
#define CURRENT_SENSOR_M1 A8
#define CURRENT_SENSOR_M2 A9
#define CURRENT_SENSOR_M3 A10
#define CURRENT_SENSOR_M4 A11
//VOLTAGE
#define VOLTAGE_SENSOR A6

//VARIABLES
//FREQUENCY OF MEASURE
const int measuring_frequency = 100;
//FREQUENCY OF RPM COUNTING, HOW OFTEN THE RPM IS MEASURED BY MEASURING FREQUENCIES
const int rpm_counting_frequency = 5;
unsigned long prevTime = 0;
//IR SENSOR INTERRUPTIONS COUNT
volatile unsigned int count_m1 = 0;
volatile unsigned int count_m2 = 0;
volatile unsigned int count_m3 = 0;
volatile unsigned int count_m4 = 0;
//RPM COUNT
volatile float rpm_m1=0;
volatile float rpm_m2=0;
volatile float rpm_m3=0;
volatile float rpm_m4=0;
//CURRENT VALUES
volatile float current_m1 = 0;
volatile float current_m2 = 0;
volatile float current_m3 = 0;
volatile float current_m4 = 0;
//TEMPERATURE VALUES
volatile float ambient_temperature = 0;
volatile float battery_temperature = 0;
//VOLTAGE VALUE
volatile float voltage = 0;
//LOOP
volatile int loop_iterations=0;

//COUNTING INTERRUPTIONS FUNCTIONS
void interruption_counting_m1() {
  noInterrupts();
  count_m1 = count_m1 + 1;
  interrupts();
}
void interruption_counting_m2() {
  noInterrupts();
  count_m2 = count_m2 + 1;
  interrupts();
}
void interruption_counting_m3() {
  noInterrupts();
  count_m3 = count_m3 + 1;
  interrupts();
}
void interruption_counting_m4() {
  noInterrupts();
  count_m4 = count_m4 + 1;
  interrupts();
}

void setup() {
  Serial.begin(115200);
  delay(100);

  WiFi.begin(ssid, password); //CONNECT TO WiFi

  Serial.println("Connecting to WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("...");
  }

  Serial.println("Connected to WiFi!");
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  server.begin();

  //STARTING INTERRUPTS FROM IR SENSORS
  attachInterrupt(digitalPinToInterrupt(IR_SENSOR_M1), interruption_counting_m1, FALLING);
  attachInterrupt(digitalPinToInterrupt(IR_SENSOR_M2), interruption_counting_m2, FALLING);
  attachInterrupt(digitalPinToInterrupt(IR_SENSOR_M3), interruption_counting_m3, FALLING);
  attachInterrupt(digitalPinToInterrupt(IR_SENSOR_M4), interruption_counting_m4, FALLING);

}

//SENDING FUNCTION
void SendToApp(WiFiClient client)
{
  char buffer[100]; // Utwórz bufor o odpowiednim rozmiarze
  sprintf(buffer, "*%d;%d;%d;%d;%.2f;%.2f;%.2f;%.2f;%.2f;%.2f;%d;%d#", rpm_m1, rpm_m2, rpm_m3, rpm_m4, current_m1, current_m2, current_m3, ambient_temperature, battery_temperature, voltage);
  //client.println("elo");
  client.println(buffer);
}

//SERIAL PRINT VALUES
void SensorsSerialPrint()
{
  Serial.println("RPM1 M1");
  Serial.println(rpm_m1);
  Serial.println("RPM M2: ");
  Serial.println(rpm_m2);
  Serial.println("RPM M3: ");
  Serial.println(rpm_m3);
  Serial.println("RPM M4: ");
  Serial.println(rpm_m4);
  Serial.println("CURRENT M1: ");
  Serial.println(current_m1);
  Serial.println("CURRENT M2: ");
  Serial.println(current_m2);
  Serial.println("CURRENT M3: ");
  Serial.println(current_m3);
  Serial.println("CURRENT M4: ");
  Serial.println(current_m4);
  Serial.println("AMBIENT TEMPERATURE: ");
  Serial.println(ambient_temperature);
  Serial.println("BATTERY TEMPERATURE: ");
  Serial.println(battery_temperature);
  Serial.println("VOLTAGE: ");
  Serial.println(voltage);
}


//MAIN LOOP
void loop() 
{
  WiFiClient client = server.available();   // Oczekuj na klienta
  if (client) {                             
    Serial.println("Nowy klient");                     
    while (client.connected()) {
      unsigned long currentTime = millis();
      unsigned long elapsedTime = currentTime - prevTime;                      

      if (elapsedTime >= measuring_frequency)
      {
        if (loop_iterations == rpm_counting_frequency)
        {
          rpm_m1 = (count_m1) * (60000.0 / elapsedTime); // Calculate RPM
          rpm_m2 = (count_m2) * (60000.0 / elapsedTime); // Calculate RPM
          rpm_m3 = (count_m3) * (60000.0 / elapsedTime); // Calculate RPM
          rpm_m4 = (count_m4) * (60000.0 / elapsedTime); // Calculate RPM
          count_m1 = 0;
          count_m2 = 0;
          count_m3 = 0;
          count_m4 = 0;
        }

        //TEMPERAUTRE SENSING
        ambient_temperature = analogRead(TEMP_SENSOR_AMBIENT);
        battery_temperature = analogRead(TEMP_SENSOR_BATTERY);
        //TEMPERATRURE CONVERSION
        ambient_temperature = ambient_temperature * 0.48828125;
        battery_temperature = battery_temperature * 0.48828125;

        //VOLTAGE SENSING
        voltage = analogRead(VOLTAGE_SENSOR);
        prevTime = currentTime; // Update previous time
      }
      SensorsSerialPrint();
      SendToApp(client);
      loop_iterations = loop_iterations + 1;
      delay(1);
    }
    //client.stop();
    Serial.println("Klient rozłączony");
  }
}