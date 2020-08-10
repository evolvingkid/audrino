int sensor=7;
int fireVal;
int speaker=8;
void setup() {
  // put your setup code here, to run once:
pinMode(sensor,INPUT);
pinMode(speaker,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
fireVal=digitalRead(sensor);
Serial.println(fireVal);
if(fireVal==1){
Serial.println("No Fire");
digitalWrite(speaker, LOW);
}else
{
  Serial.println("Fire");
  digitalWrite(speaker, HIGH);
}
delay(50);
}
