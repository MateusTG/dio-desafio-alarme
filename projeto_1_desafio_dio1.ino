// C++ code
//

const int LM35 = A0;
float temperatura;
const int Buzzer = 7;
  
void setup()
{
  Serial.begin(9600);
  analogReference(INTERNAL);
  pinMode(Buzzer, OUTPUT);
  digitalWrite(Buzzer, LOW);
}

void loop()
{
  temperatura = (float(analogRead(LM35))*5/(1023))/0.01;
  if(temperatura > 30){
  	Serial.print("Ligar Motor"); 
    if(temperatura > 35){
    	digitalWrite(Buzzer, HIGH);
    }
  }
  delay(500);
}