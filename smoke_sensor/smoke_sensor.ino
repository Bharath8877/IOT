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
  Serial.println(a);
  if(swv==HIGH)
  {
    Serial.print("Smoke detected!");
    delay(1000);
  }
  else
  {
    Serial.println("Smoke not detected");
    delay(1000);
  }
}
