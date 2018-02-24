#define ESP8266_LED 5

void setup() 
{
  pinMode(ESP8266_LED, OUTPUT);
}

void loop() 
{
  digitalWrite(ESP8266_LED, HIGH); // LED off
  delay(500);
  digitalWrite(ESP8266_LED, LOW); // LED on
  delay(500);
}

