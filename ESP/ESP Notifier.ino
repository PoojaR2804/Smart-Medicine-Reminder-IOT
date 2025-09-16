ESP Code:
#define BLYNK_TEMPLATE_ID "TMPL3UvNBglWv"
#define BLYNK_TEMPLATE_NAME "Medicine Reminder"
#define BLYNK_AUTH_TOKEN "MIJaFl-o-OroeckOmQH1QSV8Qa89JCFE"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// WiFi credentials
char ssid[] = "FTTH-C1EC";
char pass[] = "12345678";

int espInputPin = D1;     // From Arduino when missed dose

void setup() {
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  pinMode(espInputPin, INPUT);
}

void loop() {
  Blynk.run();

  // Missed medicine
  if (digitalRead(espInputPin) == HIGH) {
    Blynk.logEvent("missed__medicine");
    delay(1000);  // debounce
  
  }
}
