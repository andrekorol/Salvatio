/*
MIT License

Copyright (c) 2017 Korol Tecnologia Limitada - ME

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

  For a permissive-licensed copy of this software please refer to
  https://github.com/andrekorol/Salvatio
 */

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
