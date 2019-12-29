int led1=16;  //d0
int led2=2;   //d4
int sw=5;
int swv=0;

void setup() {
  // put your setup code here, to run once:

pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(sw,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
swv=digitalRead(sw);
if(swv==HIGH)
{
  Serial.begin(9600);
  Serial.print("swv=");
  Serial.print(swv);
  Serial.println("Led1 and led2 are on");
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  delay(2000);
}
else
{
  Serial.print("swv=");
  Serial.println(swv);
  Serial.println("Led1 and led2 are off");
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(2000);
}
}
