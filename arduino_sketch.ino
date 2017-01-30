void setup()
{
  Serial.begin(9600);
               
}
void loop()
{
   int value = 1;    // read the value of the Analog Input
   Serial.println(value);                     // Print the value; can also be seen on Serial Monitor
    delay(1000);                                   // Don't send too fast or the Android buffer will flood - this worked for me
}
