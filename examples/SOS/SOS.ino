#include <IBC.h>

morse_setup(13, 250, 1000);

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  dot(); dot(); dot();
  dash(); dash(); dash();
  dot(); dot(); dot();
  delay(3000);
}
