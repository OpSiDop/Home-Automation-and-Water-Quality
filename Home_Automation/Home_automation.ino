
#define BLYNK_PRINT Serial


#define BLYNK_TEMPLATE_ID "Na"
#define BLYNK_DEVICE_NAME "Home automation"
#define BLYNK_AUTH_TOKEN "NA"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Sidhartha's Galaxy S20 FE 5G";  // Enter your Wifi Username
char pass[] = "NA";  // Enter your Wifi password

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();
}
