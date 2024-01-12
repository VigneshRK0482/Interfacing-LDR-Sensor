#include <Arduino.h> 
const int LDR_Pin = 18; //Pin number to which LDR is connected to Arduino Nano (Pin D12)
int value; // Using 'value' as a variable to read the output of the LDR

void setup() 
{
  Serial.begin(115200); // Initialising Serial Monitor with 115200 Baid Rate
}

void loop() 
{
  value=digitalRead(LDR_Pin); //Reading the output of the LDR
  Serial.print("LDR Output: "); //Printing the output of the LDR
  Serial.println(value);
  // The HW-072 LDR which I used, returned 0 when light is present and 1 when light is not present
  // Hence the following block can be used to write a code of what to do when the light is detected or not
    if (value == HIGH) 
    {
    Serial.println("Dark");
    } 
    else 
    {
      Serial.println("Light");
    }
  delay(1000); // Delay of 1 second is provided
}
