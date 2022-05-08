void setup() {
 
  Serial.begin(9600);
}
void loop() {
  if (Serial.availableMessage() != 0) {
      string mystr = Serial.readMessage();
      Serial.println("Printed by receiver: " + mystr);
  }
  delay(2000);
}
