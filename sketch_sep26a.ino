Byte Led=11; 
byte Ldr=0; 
int valor; 
 
 
void setup() { 
   
pinMode(Led,OUTPUT); 
digitalWrite(Led,LOW); 
Serial.begin(9600); 
} 
 
void loop() { 
 
valor=analogRead(Ldr); 
valor=valor/4; 
analogWrite(Led,valor); 
Serial.println(valor); 
} 
