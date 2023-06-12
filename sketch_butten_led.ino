boolean pus;
int i=0;
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 pus=digitalRead(2);
if(pus==HIGH){
  if(i==0){
    digitalWrite(3,HIGH);
    i++;
  }
else{
digitalWrite(3,LOW);
i--;
}
delay(20);
}
}
