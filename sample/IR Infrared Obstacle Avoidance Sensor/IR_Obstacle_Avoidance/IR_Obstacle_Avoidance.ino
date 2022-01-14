void setup()
{
  Serial.begin(9600);
}


void loop()
{
  int sensorValue = digitalRead(A0);
  Serial.println(sensorValue);
  // 0 is appear something and can see 2 ligths on sensor
  // 1 is not found some object
  delay(500);
}
