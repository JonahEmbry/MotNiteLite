void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, INPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  Serial.println(digitalRead(3));
  delay(100);
  if(digitalRead(3) == HIGH){
    Serial.println("Triggered");
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(5, HIGH);
    delay(5000);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }

}
