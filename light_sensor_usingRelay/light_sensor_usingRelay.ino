int swv;
int a=A0;

void setup()
{
  Serial.begin(9600);
  pinMode(a,INPUT);
  pinMode(D1,OUTPUT);
}
void loop()
{
  swv=analogRead(a);
  if(swv>1000)
  {
    //turn on relay
    
    Serial.print(swv);
    Serial.println("   Completely dark!   Relay turned on");
  
    digitalWrite(5,HIGH);
    delay(500);
  }
  else if(swv>=400)
  {
    Serial.print(swv);
    Serial.println("   50% lighting");
    digitalWrite(5,LOW);
    delay(500);
  }
  else if(swv<=200)
  {
    Serial.print(swv);
    Serial.println("    Its bright outside!");
    digitalWrite(5,LOW);
    delay(500);
  }
}
