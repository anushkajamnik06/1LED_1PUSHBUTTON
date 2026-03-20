#define led 2 
#define pushbutton 8  

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pushbutton,INPUT);
}

void loop() {
   bool x = digitalRead(pushbutton);
if ( x==1 ) {
  digitalWrite(led,HIGH);
}
else{
  digitalWrite(led,LOW);
}
}