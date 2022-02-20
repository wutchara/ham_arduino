int led = 13;
int relay = 2; // กำหนดขาควบคุม Relay
void setup()
{
  pinMode(relay, OUTPUT);
  pinMode(led, OUTPUT);
}
void loop()
{
  digitalWrite(led, 1);
  digitalWrite(relay, 1);
  delay(4000);
  digitalWrite(led, 0);
  digitalWrite(relay, 0);
  delay(4000);
}
