const int trigPin = 11; 
const int echoPin = 10;
 
float duration, dist;
 
void setup() { 
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT);
} 
 
void loop() { 
    digitalWrite(trigPin, LOW);
    delay(1);
    digitalWrite(trigPin, HIGH);
    delay(1);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
	
	//get distance from duration
	dist = (duration / 2) * 0.0343;
	
	// Print results to serial monitor
	Serial.print("Distance = ");
	if (dist >= 400 || dist <= 2) {
		Serial.println("Out of range!");
	} else {
		Serial.print(dist);
		Serial.print(" units");
		delay(500);
	}
    delay(100);
} 
