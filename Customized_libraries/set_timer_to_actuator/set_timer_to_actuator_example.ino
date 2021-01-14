#include <SimpleTimer.h>
#define BUTTON 2
#define BUZZER 8
#define LED 13
SimpleTimer timer;
int pState = LOW;
boolean booked = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(BUTTON);
  if (pState == LOW && state == HIGH){
    if (booked == false){
      booked = true;
      digitalWrite(LED, HIGH);
      timer.setInterval_and_run(5000, beep);
      }}
  pState = state;
  timer.reset();
}

void beep(){
  booked = false;
  digitalWrite(LED, LOW);
  tone(BUZZER,1000,20);
  delay(500);
  tone(BUZZER,1000,20);
  delay(500);
  tone(BUZZER,1000,20);
  }
