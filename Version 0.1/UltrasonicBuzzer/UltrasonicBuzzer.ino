int redPin = 9;
int yellowPin = 10;
int greenPin = 11;
int trigPin = 5;
int echoPin = 6;
int buzzerPin = 3;
int distance;
int duration;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration * 0.034) / 2;

  Serial.print("The Time Taken is: ");
  Serial.print(duration);
  Serial.println(" us");
  Serial.print("The Distance is ");
  Serial.print(distance);
  Serial.println(" cm");

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
  delay(1000);
  // put your main code here, to run repeatedly:

}
