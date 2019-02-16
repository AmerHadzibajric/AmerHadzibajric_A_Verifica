int rosso = 13;
int giallo = 11; 
int bianco = 7;
int verde = 5;
int trosso = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(rosso,OUTPUT)
  pinMode(giallo,OUTPUT)
  pinMode(bianco, OUTPUT)
  pinMode(verde, OUTPUT)

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rosso,HIGH);
  delay(trosso);
  

}

void RichiestaRosso()
{
  Serial.begin(9600);
  Serial.println("QUANTO VUOI CHE DURI IL ROSSO?")
  while(Serial.available()==0){};
  trosso = Serial.readString().toInt()/1000;
}
