#include <Servo.h>

int redPin = 9;
int yellowPin = 10;
int greenPin = 11;
int buzzerPin = 2;
int echoPin = 6;
int trigPin = 5;
int distance;
long duration;
Servo myServo;
int pos;
int servoPin = 4;


void setup() {
  Serial.begin(9600);

  myServo.attach(servoPin);

  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);

  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(buzzerPin, LOW);
  digitalWrite(echoPin, LOW);
  digitalWrite(trigPin, LOW);
  myServo.write(0);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration * 0.034) / 2;

  Serial.print("The Duration is: ");
  Serial.print(duration);
  Serial.println("us");
  Serial.print("The Distance is ");
  Serial.print(distance);
  Serial.println("cm");

  if(distance <= 20){
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(buzzerPin, HIGH);
  }
  else if(distance <= 50 && distance > 20){
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  else{
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  }
  
  for(pos = 0; pos <= 180; pos++){
    myServo.write(pos);
    delay(20);
  }

  for(pos = 180; pos >= 0; pos--){
    myServo.write(pos);
    delay(20);
  }

  delay(1000);
  // put your main code here, to run repeatedly:

}
