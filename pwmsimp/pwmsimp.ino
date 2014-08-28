
int led = 11;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  for(int i=0;i<=255;i++)
  {
  analogWrite(led, i); 
  delay(10); 
  } 
  for(int j=255;j>0;j--)
  {  
  analogWrite(led, j);    
  delay(10);
  }  
  //delay(1000);
}
