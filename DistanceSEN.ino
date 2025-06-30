const int trigPin = 9;        
const int echoPin = 10;       
const int buzzerPin = 11;     
const int greenLED = 5;       
const int yellowLED = 6;      
const int redLED = 7;        

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

  float distance = (duration * 0.034) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 20) {
    
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzerPin, LOW); 
  } else if (distance > 10 && distance <= 20) {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);

    int buzzerDelay = 200;
    digitalWrite(buzzerPin, HIGH);
    delay(buzzerDelay);
    digitalWrite(buzzerPin, LOW);
    delay(buzzerDelay);
  } else if (distance <= 10) {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);

    
    int buzzerDelay = 100;
    digitalWrite(buzzerPin, HIGH);
    delay(buzzerDelay);
    digitalWrite(buzzerPin, LOW);
    delay(buzzerDelay);
  }

  delay(100);
}