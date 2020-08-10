const int lightSensor=A0;
int lightport=8;
void setup() {
Serial.begin(9600);
pinMode(lightSensor, INPUT);
pinMode(lightport, OUTPUT);
}

void loop() {
int lightSensorStatus= analogRead(lightSensor);
Serial.println(lightSensorStatus);
if(lightSensorStatus <= 300){
  Serial.println("Its not too biright");
   digitalWrite(lightport, HIGH);
   delay(30);
    digitalWrite(lightport, LOW);
}else{
    Serial.println("Its  too biright");
}
}
