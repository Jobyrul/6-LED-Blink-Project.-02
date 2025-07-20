
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode( 13, OUTPUT);
  pinMode( 12, OUTPUT);
  pinMode( 11, OUTPUT);
  pinMode( 10, OUTPUT);
  pinMode( 9, OUTPUT);
  pinMode( 8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite( 13,HIGH);   
  delay(1000);                      
  digitalWrite( 13, LOW);   
  delay(500); 
  digitalWrite( 12, HIGH);   
  delay(1000);                      
  digitalWrite( 12, LOW);   
  delay(500); 
  digitalWrite( 11, HIGH);   
  delay(1000);                      
  digitalWrite( 11, LOW);   
  delay(500); 
  digitalWrite( 10, HIGH);   
  delay(1000);                      
  digitalWrite( 10, LOW);   
  delay(500);
  digitalWrite( 9, HIGH);   
  delay(1000);                      
  digitalWrite( 9, LOW);   
  delay(500); 
  digitalWrite( 8, HIGH);   
  delay(1000);                      
  digitalWrite( 8, LOW);   
  delay(500);    
                     
}
