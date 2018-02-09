int buttonPin = 7; 
int potPin = A0;  
int potVal = 0;
int motorOne = 5;
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;


void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(potPin, INPUT); 
  pinMode(motorOne, OUTPUT);
  Serial.begin(9600); 
  
}

void loop() {
   potVal = analogRead(potPin);

  Serial.print(" potentiometer value: ");
  Serial.print(potVal);
 
  buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counte
if (buttonState == HIGH) {
buttonPushCounter++;
  }
      lastButtonState = buttonState; 
  }
  

    if (buttonPushCounter % 2 == 0) {
  int fanSpeed = map (potVal, 0, 1023, 0, 255);
   analogWrite(motorOne, fanSpeed); 
     Serial.print(" button state: ");
  Serial.print(buttonState); 
     Serial.print("; fan speed: ");
  Serial.println(fanSpeed);  
    
  }
   else{
    int fanSpeed = 0;
    analogWrite(motorOne, fanSpeed);
    Serial.print(" button state: ");
  Serial.print(buttonState); 
      Serial.print("; fan speed: ");
  Serial.println(fanSpeed);    
  }

   Serial.print(" button counter: ");
   Serial.print(buttonPushCounter); 
     
  delay(50); 

}


