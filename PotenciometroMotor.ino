int M_3=3;
int M_4=4;
int pot=A0;
int vel;
int adelante;
int atras;

void setup()
{
  pinMode(M_3,OUTPUT);
  pinMode(M_4,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  vel=analogRead(pot);
  adelante = map(vel,0,1023,100,155);
  atras = map(vel,0,1023,155,100);
  analogWrite(M_3,adelante);
  analogWrite(M_4,atras);
}
