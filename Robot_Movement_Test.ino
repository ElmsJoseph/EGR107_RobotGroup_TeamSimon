void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);


  analogWrite(6,128); 
  digitalWrite(7,HIGH);
  digitalWrite(8, LOW);
  

  analogWrite(11, 128);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(3000);

  analogWrite(6,0);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  

  analogWrite(11, 0);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(3000);

  analogWrite(6,128); 
  digitalWrite(7,HIGH);
  digitalWrite(8, LOW);
  

  analogWrite(11, 5);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(3000);

  analogWrite(6,0);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  

  analogWrite(11, 0);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(3000);

}

void loop() {
  // put your main code here, to run repeatedly:

}
