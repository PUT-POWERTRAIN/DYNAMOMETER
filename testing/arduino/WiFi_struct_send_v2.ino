#include <WiFi.h>

const char* ssid     = "TP-Link_33DD";
const char* password = "03215111";
WiFiServer server(12345);

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

void setup()
{
  Serial.begin(115200);
  delay(1000);

  // Połącz z siecią WiFi
  Serial.println();
  Serial.println();
  Serial.print("Łączenie z siecią: ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi połączono");
  Serial.println("Adres IP: ");
  Serial.println(WiFi.localIP());

  server.begin();
}

void loop()
{
  WiFiClient client = server.available();   // Oczekuj na klienta
  if (client) {                             
    Serial.println("Nowy klient");                     
    while (client.connected()) {                      
        delay(300);
        Serial.println("polaczenie");
        SendToApp(client);       
    }
    //client.stop();
    Serial.println("Klient rozłączony");
  }
}