

#include "DHT.h"

#define DHTPIN 4

#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);


void setup() {

    Serial.begin(9600);
    Serial.println("DHTxx test!");

    dht.begin();
}

void loop() {
  {
    float h = dht.readHumidity ();
    float t = dht.readTemperature ();

    
    if (isnan(t)|| isnan(h))
    {
      Serial.println("résultat invalide");
    } else {
        Serial.print("Humidité: ");
        Serial.print(h);
        Serial.print(" %\t");
        Serial.print("Temperature : ");
        Serial.print(t);
        Serial.println(" %\h");
    }

    delay(1500);
  }
}
