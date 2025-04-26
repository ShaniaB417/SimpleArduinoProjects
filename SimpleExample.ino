
int LED = 12; 
int counter = 0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT); 
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
 counter = counter + 100 ; // addining 1 everytime it loops 
 Serial.print("Blink #:  "); 
 Serial.println(counter); 

digitalWrite(LED , HIGH); 
delay(1000 - counter); 
digitalWrite(LED , LOW); 
delay(1000 - counter); 

}
