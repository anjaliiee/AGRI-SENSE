// ** Code Overview**
// The project uses two main libraries:

// ESP8266WiFi.h: To connect the ESP8266 to the WiFi network.
// BlynkSimpleEsp8266.h: To integrate the Blynk app with ESP8266.
// The code continuously reads soil moisture levels from the sensor and compares them with a threshold value. When the soil moisture is low, it activates the water pump via the relay module. Users can monitor soil moisture levels and manually control the pump from the Blynk app.





//------------> Replace "YourAuthToken", "YourWiFiSSID", and "YourWiFiPassword" with your respective credentials.

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "YourAuthToken";
char ssid[] = "YourWiFiSSID";
char pass[] = "YourWiFiPassword";

int sensorPin = A0, relayPin = D1;
int moistureThreshold = 600;

BLYNK_WRITE(V1) {
  digitalWrite(relayPin, param.asInt());  // Manual pump control from Blynk app
}

void setup() {
  pinMode(relayPin, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
  int moistureLevel = analogRead(sensorPin);
  Blynk.virtualWrite(V0, moistureLevel);  // Send moisture level to Blynk app

  if (moistureLevel < moistureThreshold) {
    digitalWrite(relayPin, HIGH);  // Turn on water pump
  } else {
    digitalWrite(relayPin, LOW);  // Turn off water pump
  }
}
