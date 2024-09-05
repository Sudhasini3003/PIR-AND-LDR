void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
pinMode(D2,INPUT);
pinMode(D1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorVal = digitalRead(D2);
Serial.print("Value");
Serial.println(sensorVal);
delay(1000);
if(sensorVal==1)
{
digitalWrite(D1,HIGH);
delay(2000);
digitalWrite(D1,LOW);
}
else
{
digitalWrite(D1,LOW);
}
}
