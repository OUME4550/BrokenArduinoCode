int pushButton = 2;
int LED_OUTPUT = 13;
void setup() 
{
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  pinMode(LED_OUTPUT, OUTPUT);
  digitalWrite(LED_OUTPUT,0)
}
void loop() 
{
  int buttonState = digitalReadButton();
  Serial.println(buttonState);
  if(buttonState = 1)
    digitalWriteLED("1")
  else
    digitalWrite(ZERO)
  delay("1");  
}


