int s0, s1, s2, s3, s4;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  s0 = analogRead(A0);
  s1 = analogRead(A1);
  s2 = analogRead(A2);
  s3 = analogRead(A3);
  s4 = analogRead(A4);

  // print out the value you read:
  Serial.print(0);
  Serial.print(" ");
  Serial.print(1000);
  Serial.print(" ");

  Serial.print(s0);
  Serial.print(" ");
  Serial.print(s1);
  Serial.print(" ");
  Serial.println(s2);
  // Serial.print(" ");
  // Serial.print(s3);
  // Serial.print(" ");
  // Serial.println(s4);

  delay(100);  // delay in between reads for stability
}
