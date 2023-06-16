#include <Arduino.h>

#define JOYSTICK_SW 2
#define JOYSTICK_X A4
#define JOYSTICK_Y A5

void setup() {
    Serial.begin(9600);
    pinMode(JOYSTICK_SW, INPUT_PULLUP);
    pinMode(JOYSTICK_X, INPUT);
    pinMode(JOYSTICK_Y, INPUT);
}

void loop() {

    int joystickSw = digitalRead(JOYSTICK_SW);
    int joystickX = analogRead(JOYSTICK_X);
    int joystickY = analogRead(JOYSTICK_Y);

    Serial.print("X_AXYS:");
    Serial.print(joystickX);

    Serial.print(" ");

    Serial.print("Y_AXYS:");
    Serial.print(joystickY);

    Serial.print(" ");

    Serial.print("SWITCH:");
    Serial.print(joystickSw);

    Serial.println();

    delay(10);

}