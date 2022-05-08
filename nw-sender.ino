void setup() {
  pinMode(0, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  string msg = "Your message here";
  Serial.sendMessage(0, msg);
  delay(2000);d
}
