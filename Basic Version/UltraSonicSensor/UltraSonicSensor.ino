int trigPin = 2;
int echoPin = 4;
int  distance;
long duration;
int redPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redPin, OUTPUT);
  
  digitalWrite(trigPin, LOW);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration * 0.034) / 2;

  Serial.print("The Time Taken is: ");
  Serial.print(duration);
  Serial.println(" us");
  Serial.print("The Distance is");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance <= 20){
    analogWrite(redPin, 255);
  }
  else{
    analogWrite(redPin, 0);
  }

  delay(1000);
  // put your main code here, to run repeatedly:

}
