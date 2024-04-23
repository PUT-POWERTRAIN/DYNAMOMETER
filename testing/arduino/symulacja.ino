// PUT POWERTRAIN 2024
// DRONE DYNAMOMETER PROGRAM SIMLATION
// DESIGNED FOR ARDUINO GIGA R1 MAINCORE


//LIBRARIES
#include <string>
#include <WiFi.h> // WiFi


//WiFi SETUP
const char* ssid = "TP-Link_33DD"; //WiFi NAME
const char* password = "03215111"; //PASSWORD
WiFiServer server(12345);
WiFiClient client;


//VARIABLES
//FREQUENCY OF MEASURE
const int measuring_frequency = 100;
//FREQUENCY OF RPM COUNTING, HOW OFTEN THE RPM IS MEASURED BY MEASURING FREQUENCIES
const int rpm_counting_frequency = 5;
unsigned long prevTime = 0;
//IR SENSOR INTERRUPTIONS COUNT
volatile unsigned int count_m1 = 10000;
volatile unsigned int count_m2 = 10000;
volatile unsigned int count_m3 = 10000;
volatile unsigned int count_m4 = 10000;
//RPM COUNT
volatile float rpm_m1=1000;
volatile float rpm_m2=1000;
volatile float rpm_m3=1000;
volatile float rpm_m4=1000;
//CURRENT VALUES
volatile float current_m1 = 3.2;
volatile float current_m2 = 4.3;
volatile float current_m3 = 5.1;
volatile float current_m4 = 7.6;
//TEMPERATURE VALUES
volatile float ambient_temperature = 24.1;
volatile float battery_temperature = 46.8;
//VOLTAGE VALUE
volatile float voltage = 11.7;
//LOOP
volatile int loop_iterations=0;



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

}

//SENDING FUNCTION
void SendToApp(WiFiClient client)
{
  char buffer[1000]; // Utwórz bufor o odpowiednim rozmiarze
  sprintf(buffer, "*%d;%d;%d;%d;%.2f;%.2f;%.2f;%.2f;%.2f;%.2f;%d;%d#", rpm_m1, rpm_m2, rpm_m3, rpm_m4, current_m1, current_m2, current_m3, ambient_temperature, battery_temperature, voltage);
  //client.println("elo");
  client.println(buffer);
}

//SERIAL PRINT VALUES
void SensorsSerialPrint()
{
  Serial.print("RPM1 M1");
  Serial.print(rpm_m1);
  Serial.print("RPM M2: ");
  Serial.print(rpm_m2);
  Serial.print("RPM M3: ");
  Serial.print(rpm_m3);
  Serial.print("RPM M4: ");
  Serial.print(rpm_m4);
  Serial.print("CURRENT M1: ");
  Serial.print(current_m1);
  Serial.print("CURRENT M2: ");
  Serial.print(current_m2);
  Serial.print("CURRENT M3: ");
  Serial.print(current_m3);
  Serial.print("CURRENT M4: ");
  Serial.print(current_m4);
  Serial.print("AMBIENT TEMPERATURE: ");
  Serial.print(ambient_temperature);
  Serial.print("BATTERY TEMPERATURE: ");
  Serial.print(battery_temperature);
  Serial.print("VOLTAGE: ");
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
      /*
      if (elapsedTime >= measuring_frequency) 
      {
        if (loop_iterations = rpm_counting_frequency)
        {
          rpm_m1 = (count_m1) * (60000.0 / elapsedTime); // Calculate RPM
          rpm_m2 = (count_m2) * (60000.0 / elapsedTime); // Calculate RPM
          rpm_m3 = (count_m3) * (60000.0 / elapsedTime); // Calculate RPM
          rpm_m4 = (count_m4) * (60000.0 / elapsedTime); // Calculate RPM
          Serial.print("LICZENIE RPM\n");
          count_m1 = 0;
          count_m2 = 0;    //Zamieniłem z = 0, na += 1 na potrzeby testów 
          count_m3 = 0;
          count_m4 = 0;
        }
        /*
  /*
        //CURRENT SENSING
        current_m1 = RNG(current);
        current_m2 = RNG(current);
        current_m3 = RNG(current);
        current_m4 = RNG(current);

        //TEMPERAUTRE SENSING
        ambient_temperature = RNG(ambientTemp);
        battery_temperature = RNG(batteryTemp):

        //VOLTAGE SENSING
        voltage = RNG(voltage);
*/
        //prevTime = currentTime; // Update previous time
        //Serial.print("LOOP\n");
        //SensorsSerialPrint();

        SendToApp(client); //test sendtoapp

        loop_iterations = loop_iterations + 1;
        delay(1);
      //}
    }
    //client.stop();
    Serial.println("Klient rozłączony");
  }
}
