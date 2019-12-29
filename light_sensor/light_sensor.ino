int swv;
int a=A0;

void setup()
{
  Serial.begin(9600);
  pinMode(a,INPUT);
}
void loop()
{
  swv=analogRead(a);
  Serial.println(swv);
  if(swv>1000)
  {
    Serial.print("Completely dark!");
    delay(500);
  }
  else if(swv>=400)
  {
    Serial.println("50% lighting");
    delay(500);
  }
  else if(swv<=200)
  {
    Serial.print("Its bright outside!");
    delay(500);
  }
}
