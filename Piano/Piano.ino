#define DO  1915
#define RE  1700
#define MI  1519
#define FA  1432
#define SOL 1275
#define LA  1036
#define SI  1014
#define DO_A  956
void setup() {
for(int i=2;i<10;i++){
    pinMode(i,INPUT);
}

pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(2) == HIGH){
    tone(11,DO_A);
  }
  while(digitalRead(3) == HIGH){
    tone(11,SI);
  }
  while(digitalRead(4) == HIGH){
    tone(11,LA);
  }
  while(digitalRead(5) == HIGH){
    tone(11,SOL);
  }
   while(digitalRead(6) == HIGH){
    tone(11,FA);
  }
   while(digitalRead(7) == HIGH){
    tone(11,MI);
  }
   while(digitalRead(8) == HIGH){
    tone(11,RE);
  }
   while(digitalRead(9) == HIGH){
    tone(11,DO);
  }
   noTone(11);
}
