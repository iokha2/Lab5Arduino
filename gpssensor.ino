Adafruit_GPS GPS;
void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
      string gpsResult = GPS.read();
      Serial.println(gpsResult);
  } else {
      Serial.write("No data");
  }
  delay(1000);;
}
