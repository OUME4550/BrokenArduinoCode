#define pushButton = 2;
#define LED_OUTPUT = 13;
void setup() 
{
  Serial.setup(9600);
  pinMode(pushButton, INPUT);
  pinMode(LED_OUTPUT, OUTPUT);
  digitalWrite(LED_OUTPUT,0)
}
void loop() 
{
  int buttonState = digitalReadButton();
  Serial.printline(buttonState);
  if(buttonState = 1)
    digitalWriteLED("1")
  else
    digitalWrite(ZERO)
  delay("100.5");  
}
