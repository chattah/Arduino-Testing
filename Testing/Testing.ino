/*
 Name:		Testing.ino
 Created:	7/14/2017 8:43:19 PM
 Author:	JoelL
*/

int led = 13;

// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(led, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
    Serial.println("ON");
    digitalWrite(LED_BUILTIN, HIGH);
    
    delay(1000);
    
    Serial.println("OFF");
    digitalWrite(LED_BUILTIN, LOW);

    delay(1000);
}
