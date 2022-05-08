void setup() {
   pinMode(A1, INPUT);
}
 
void loop() {
   float temp = analogRead(A1) / 1023.0 * 5.0 * 100.0;
   float inFarenheit = (temp * 1.8) + 32.0;
   Serial.println("temperature: " + to_string(inFarenheit) + " Fahrenheit");
   delay(1000);
}
