void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {

  if ( Serial.available() ) {
    char incoming = Serial.read();

    if(incoming == 'y'){
      digitalWrite(3,HIGH);
      }

    if (incoming == 'n'){
      digitalWrite(3,LOW);
      }
    
    int pot = analogRead(A0);
    int pot2 = analogRead(A1);
    Serial.print(pot);
    Serial.print(",");
    Serial.println( pot2 );
  }

}
