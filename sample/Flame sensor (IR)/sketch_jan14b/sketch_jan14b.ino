int sensor = A0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  int val = analogRead(A0);
  Serial.println(val);
  delay(100);
}
