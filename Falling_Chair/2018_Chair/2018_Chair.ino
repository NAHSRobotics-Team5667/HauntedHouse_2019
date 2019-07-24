#include <NewPing.h>

#define TriggerPin 12
#define EchoPin 11
#define MaximumDistance 250

NewPing sonar(TriggerPin, EchoPin, MaximumDistance);
int PWM = 3;

void setup() {
  Serial.begin(9600);
  pinMode(PWM, OUTPUT);
}

void loop() {
  Serial.println(sonar.ping_cm());
  if(sonar.ping_cm() < 90 ){//Set to trigger distance
    if(sonar.ping_cm() == 0){
      analogWrite(PWM, 190);
    }
    else{
    Serial.println("WORKS");
    analogWrite(PWM, 170);
    delay(1000);
    }
  }
  else{
    analogWrite(PWM, 190);
  }
}
