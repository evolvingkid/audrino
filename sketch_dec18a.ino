

int led = 3;         
//int brightness = 0;    
//int fadeAmount = 5; 
//int conut=0; 
//int i=0;  
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  if(conut ==1){
    for(i=0; i< 10; i++){
          digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
     delay(50);
      }
     conut=0;
  }
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
    conut=1;
  }
  delay(20);
}
