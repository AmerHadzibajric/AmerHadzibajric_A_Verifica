int rosso = 13;
int giallo = 11; 
int bianco = 7;
int verde = 5;
int trosso = 0;
int tgiallo = 0;
int tbianco = 0;
int tverde = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(rosso,OUTPUT);
  pinMode(giallo,OUTPUT);
  pinMode(bianco, OUTPUT);
  pinMode(verde, OUTPUT);
  RichiestaRosso();

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rosso,HIGH);
  delay(trosso);
  digitalWrite(rosso,LOW);
  digitalWrite(giallo,HIGH);
  delay(tgiallo);
 digitalWrite(rosso,LOW);
 digitalWrite(giallo,LOW);
 digitalWrite(bianco,HIGH);
 delay(tbianco);
 digitalWrite(rosso,LOW);
 digitalWrite(giallo,LOW);
 digitalWrite(bianco,LOW);
 digitalWrite(verde,HIGH);
 delay(tverde);

 
  

}

void RichiestaRosso()
{
  Serial.begin(9600);
  Serial.println("QUANTO VUOI CHE DURI IL ROSSO?");
  while(Serial.available()==0){};
  trosso = Serial.readString().toInt();
}
void RichiestaGiallo()
{
  Serial.begin(9600);
  Serial.println("QUANTO VUOI CHE DURI IL ROSSO?");
  while(Serial.available()==0){};
  tgiallo = Serial.readString().toInt();
}
void RichiestaBianco()
{
  Serial.begin(9600);
  Serial.println("QUANTO VUOI CHE DURI IL ROSSO?");
  while(Serial.available()==0){};
  tbianco = Serial.readString().toInt();
}
void RichiestaVerde()
{
  Serial.begin(9600);
  Serial.println("QUANTO VUOI CHE DURI IL ROSSO?");
  while(Serial.available()==0){};
  tverde = Serial.readString().toInt();
}
