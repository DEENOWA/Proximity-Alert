#include <LiquidCrystal_I2C.h>
#include <Servo.h>

Servo myServo;
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int redPin = 8, yellowPin = 7, greenPin = 6, buzzerPin = 5, echoPin = 4, trigPin = 3, servoPin = 2;
int distance;
int duration;
int pos;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  lcd.init();
  lcd.clear();
  lcd.backlight();

  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);

  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);
  noTone(buzzerPin);
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
  distance = (duration * 0.0343) / 2;

  Serial.print("The Duration is: ");
  Serial.print(duration);
  Serial.println("us");
  Serial.print("The Distance is ");
  Serial.print(distance);
  Serial.println("cm");

  lcd.clear();

  if(distance <= 20){
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    tone(buzzerPin, 2000);
    lcd.setCursor(3, 0);
    lcd.println("DANGER!!!!");
  }
  else if(distance <= 50 && distance > 20){
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    while(true){

      tone(buzzerPin, 5000, 200);
      delay(1000);
      noTone(buzzerPin);
    }
    lcd.setCursor(4, 0);
    lcd.println("Warning!");
    lcd.setCursor(3, 1);
    lcd.println("Too Close!");
  }
  else {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    noTone(buzzerPin);
    lcd.setCursor(5, 0);
    lcd.print("Safe");
  }
  
  for(pos = 0; pos <= 180; pos++){
    myServo.write(pos);
    delay(10);
  }

  for(pos = 180; pos >= 0; pos--){
    myServo.write(pos);
    delay(10);
  }
  // put your main code here, to run repeatedly:

}
