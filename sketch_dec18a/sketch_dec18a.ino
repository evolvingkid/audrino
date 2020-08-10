const int trigpin=9;
int on_port;
//const int echopin=9;
int speakerpin=12;
//int duration;
//int distance;
void setup() {
pinMode(trigpin, INPUT);
pinMode(speakerpin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  digitalRead(trigpin);
on_port = pulseIn(trigpin, HIGH);
if(on_port != 0){
  Serial.println("We are in");
  digitalWrite(speakerpin
//Serial.print(on_port);, HIGH);
  delay(30);
  digitalWrite(speakerpin, LOW);
}
//distance=duration*0.034/2;

}
