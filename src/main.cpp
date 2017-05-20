#include <Arduino.h>

uint8_t relay1 = 2;

byte serialA;
void setup() {
    Serial.begin(9600);
    pinMode(relay1, OUTPUT);

}

void loop() {
    if (Serial.available() > 0) {
	serialA = (byte) Serial.read();Serial.println(serialA);
    }
    switch (serialA) {
    case 1:
	digitalWrite(relay1, HIGH);
	break;
    case 2:
	digitalWrite(relay1, LOW);
	break;
    case 3:
	delay(100);
	digitalWrite(relay1, HIGH);
	delay(100);
	break;
    case 4:
	digitalWrite(relay1, LOW);
    default:
	break;
    }
}
