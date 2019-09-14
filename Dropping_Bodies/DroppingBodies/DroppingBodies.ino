#include <Servo.h>

Servo servo;
int currentPos;
boolean isDropping = false;

int buttonPin = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(9);
  pinMode(buttonPin, INPUT);
  servo.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin) == HIGH) {
    Serial.println("Getting button input!");
    isDropping = !isDropping;

    if (isDropping) {
      dropBodies();
    } else {
      reset();
    }
  }
  delay(100);
}

void dropBodies() {
  for (currentPos = 0; currentPos <= 180; currentPos += 1) {
    // in steps of 1 degree
    servo.write(currentPos);
    delay(5);
  }
}

void reset() {
  for (currentPos = 180; currentPos >= 0; currentPos -= 1) {
    servo.write(currentPos);
    delay(5);
  }
}
