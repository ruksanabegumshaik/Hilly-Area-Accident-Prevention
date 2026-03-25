#define TRIG1 9   
#define ECHO1 10  
#define TRIG2 5   
#define ECHO2 6   
#define LED1 3    
#define LED2 4    
#define BUZZER1 7 
#define BUZZER2 8 

void setup() {
  pinMode(TRIG1, OUTPUT);
  pinMode(ECHO1, INPUT);
  pinMode(TRIG2, OUTPUT);
  pinMode(ECHO2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUZZER1, OUTPUT);
  pinMode(BUZZER2, OUTPUT);
  Serial.begin(9600);
}

long getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  return pulseIn(echoPin, HIGH) * 0.034 / 2;
}

void loop() {
  long distance1 = getDistance(TRIG1, ECHO1);
  long distance2 = getDistance(TRIG2, ECHO2);

  Serial.print("Sensor 1 Distance: ");
  Serial.print(distance1);
  Serial.print(" cm | Sensor 2 Distance: ");
  Serial.print(distance2);
  Serial.println(" cm");

  // If Sensor 1 detects a vehicle, alert the other side (LED2 and Buzzer2)
  if (distance1 > 0 && distance1 < 25) {
    digitalWrite(LED2, HIGH);
    digitalWrite(BUZZER2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
    digitalWrite(BUZZER2, LOW);
  }

  // If Sensor 2 detects a vehicle, alert the other side (LED1 and Buzzer1)
  if (distance2 > 0 && distance2 < 25) {
    digitalWrite(LED1, HIGH);
    digitalWrite(BUZZER1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
    digitalWrite(BUZZER1, LOW);
  }

  delay(200);
}
