int rosso = 13;
int giallo = 11; 
int bianco = 7;
int verde = 5;
int tled = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(rosso,OUTPUT);
  pinMode(giallo,OUTPUT);
  pinMode(bianco, OUTPUT);
  pinMode(verde, OUTPUT);
  RichiestaTempo();
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(rosso,HIGH);
 digitalWrite(verde,LOW);
 delay(tled);
 digitalWrite(rosso,LOW);
 digitalWrite(giallo,HIGH);
 delay(tled);
 digitalWrite(rosso,LOW);
 digitalWrite(giallo,LOW);
 digitalWrite(bianco,HIGH);
 delay(tled);
 digitalWrite(rosso,LOW);
 digitalWrite(giallo,LOW);
 digitalWrite(bianco,LOW);
 digitalWrite(verde,HIGH);
 delay(tled);
}

void RichiestaTempo()
{
  Serial.begin(9600);
  Serial.println("QUANTO VUOI CHE RESTINO ACCESI I LED?(dare il tempo in secondi)");
  while(Serial.available()==0){};
  tled = (Serial.readString().toInt())*1000;
}
