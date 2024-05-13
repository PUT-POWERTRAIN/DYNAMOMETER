// PUT POWERTRAIN 13.05.2024
// WIFI DATA TRANSFER USING STRUCT PROGRAM
// DESIGNED FOR ARDUINO GIGA R1 MAINCORE

#include <WiFi.h>

//WiFi SETUP
const char* ssid = "TP-Link_33DD"; //WiFi NAME
const char* password = "03215111"; //PASSWORD
WiFiServer server(12345);
WiFiClient client;


struct SensorData() {
  // RPM VALUES
  volatile float rpm_m1=1;
  volatile float rpm_m2=2;
  volatile float rpm_m3=3;
  volatile float rpm_m4=4;
  // CURRENT VALUES
  volatile float current_m1 = 5;
  volatile float current_m2 = 6;
  volatile float current_m3 = 7;
  volatile float current_m4 = 8;
  // TEMPERATURE VALUES
  volatile float ambient_temperature = 9;
  volatile float battery_temperature = 10;
  // VOLTAGE VALUE
  volatile float voltage = 11;
};

//SENDING FUNCTION
void SendToApp(WiFiClient& client)
{
  byte buffer[sizeof(SensorData)];
  memcpy(buffer, &data, sizeof(SensorData));
  client.write(buffer, sizeof(buffer));
}

void setup() {
  Serial.begin(115200);
  delay(1000);

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

  // POINTER TO STRUCT
  SensorData data;
}

void loop() 
{
  WiFiClient client = server.available();
  if (client) {                             
    Serial.println("New client");                     
    while (client.connected()) {
      SensorsSerialPrint();
      SendToApp(client);
      delay(1);
    }
    //client.stop();
    Serial.println("Client Disconnected");
  }
}
