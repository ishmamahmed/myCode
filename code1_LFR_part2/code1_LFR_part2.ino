int s0, s1, s2, s3, s4;
int d0, d1, d2, d3, d4;
int th = 500;
int linePosition;
void setup() {
  Serial.begin(9600);
}

void loop() {
  // 1. Reading all the IR sensors
  s0 = analogRead(A0);
  s1 = analogRead(A1);
  s2 = analogRead(A2);
  s3 = analogRead(A3);
  s4 = analogRead(A4);

  // 2. Converting the analog values to digital values
  if(s0<th){
    d0 = 0;
  }
  else{
    d0 = 1;
  }

  if(s1<th){
    d1 = 0;
  }
  else{
    d1 = 1;
  }

  if(s2<th){
    d2 = 0;
  }
  else{
    d2 = 1;
  }

  if(s3<th){
    d3 = 0;
  }
  else{
    d3 = 1;
  }

  if(s4<th){
    d4 = 0;
  }
  else{
    d4 = 1;
  }

  // Calculating Line Position
  linePosition = -2*d0 -1*d1 + 0*d2 + 1*d3 + 2*d4;

  Serial.print(d0);
  Serial.print(" ");
  Serial.print(d1);
  Serial.print(" ");
  Serial.print(d2);
  Serial.print(" ");
  Serial.print(d3);
  Serial.print(" ");
  Serial.print(d4);
  Serial.print(" line position: ");
  Serial.println(linePosition);

  delay(100);  // delay in between reads for stability
}
