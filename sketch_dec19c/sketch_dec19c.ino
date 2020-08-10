int sensor=A0;
int sensordigi=7;
int waterVal=0;
int waterValdig=0;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(sensordigi,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
waterVal=analogRead(sensor);
waterValdig=digitalRead(sensordigi);
Serial.println(waterVal);
//Serial.println(waterValdig);
if(waterValdig == 1){
  Serial.println("No rain");
}else{
    Serial.println("raining");
}
delay(30);
}
