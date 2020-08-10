int siil__sensor=A0;
int sensorValue=0;
int motorPin=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(siil__sensor, INPUT);
  pinMode(motorPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
float moisute_percentage;
sensorValue= analogRead(siil__sensor);
Serial.println(sensorValue);
//moisute_percentage = (100,((sensorValue/1023.00)* 100));
//Serial.print("moisute_percentage");
//Serial.print(moisute_percentage);
//Serial.print("%");
//Serial.println(sensorValue);
if(sensorValue < 400){
  Serial.println("It is moisture no need of tap");
     digitalWrite(motorPin, LOW); 
}else{
  Serial.println("It is low moisture on the tap");
   digitalWrite(motorPin, HIGH);
}

delay(50);

}
