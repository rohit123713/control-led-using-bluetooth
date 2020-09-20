char data = 0;                //Variable for storing received data
#include<SoftwareSerial.h>
int i=0;
SoftwareSerial BLUETOOTH(10,11);
void setup() 
{

Serial.begin(9600); //Sets the data rate in bits per second (baud) for serial data transmission
BLUETOOTH.begin(9600);
pinMode(13, OUTPUT);        //Sets digital pin 13 as output pin

}
void loop()
{
  
if(BLUETOOTH.available() > 0)  // Send data only when you receive data:
{
 
data = BLUETOOTH.read();      //Read the incoming data and store it into variable data
Serial.print(data);        //Print Value inside data in Serial monitor
Serial.print("\n");//New line 

if(data=='A'){
  digitalWrite(13,HIGH);
}

if(data=='B'){
  digitalWrite(13,LOW);
}

}  
   
}                     
