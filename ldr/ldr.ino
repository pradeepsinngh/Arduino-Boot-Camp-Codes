int sensePin =0;
int ledPin = 9;

void setup()
{
  pinMode(sensePin,INPUT);
  pinMode(ledPin,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(sensePin);
  Serial.println(analogRead(sensePin));
  
  
  val = constrain(val,0,50);
  int ledLevel = map(val,0,50,255,0);
  analogWrite(ledPin,ledLevel);

}
