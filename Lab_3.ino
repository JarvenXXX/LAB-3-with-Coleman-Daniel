int pwmPin = 12;

int pot = A0; 

int c1 = 0;   // declares variable c1

int c2 = 0;   // declares variable c2


void setup()

{

  pinMode(pwmPin, OUTPUT); 

  pinMode(pot, INPUT);  

}


void loop()

{

  c2= analogRead(pot); 

  c1= 1024-c2;

  digitalWrite(pwmPin, HIGH); 

  delayMicroseconds(c1);   

  digitalWrite(pwmPin, LOW);  

  delayMicroseconds(c2);  

}