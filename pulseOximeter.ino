PulseOximeter pox;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  if (Serial.available()) {
      if (pox.begin()) {
          string spO2_res = pox.getSpO2();
          string hb_res = pox.getHeartRate();
          Serial.write("this is oxygen percentage: " + spO2_res + ". this is heart rate: " + hb_res);
      }
      digitalWrite(3, HIGH);
  } else{
      Serial.write("No data \\n");
      digitalWrite(3, LOW);
  }
  delay(1000);
}
