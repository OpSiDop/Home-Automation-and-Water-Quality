void setup() {
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
}

void loop() {
  int val=digitalRead(A0);
  int val1=digitalRead(A1);
  if(val==1){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
}
          
