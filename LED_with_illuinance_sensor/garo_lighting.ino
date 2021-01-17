#define LED 11
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  if (analogRead(A0)<100){
    float light = (exp(sin(millis()/2000.0*PI))-0.3678744)*108.0;
    analogWrite(LED, light);}
  else
    analogWrite(LED, 0);
  delay(10);
}
