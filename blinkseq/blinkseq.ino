/*
  Blinkseq
*/

int led1 = 13;
int led2 = 12;
int led3 = 11;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT);   
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led1, HIGH); 
  digitalWrite(led3, LOW);   
  delay(1000);
  digitalWrite(led2, HIGH);  
  digitalWrite(led1, LOW);   
  delay(1000); 
  digitalWrite(led3, HIGH);  
  digitalWrite(led2, LOW);    
  delay(1000); 
      
}
