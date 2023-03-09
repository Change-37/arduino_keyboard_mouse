#include <Keyboard.h>
#include <Mouse.h>

void setup() {
  Keyboard.begin();
  Mouse.begin();
  Keyboard.print('a');
  delay(10);
  Mouse.click();
  delay(10);
}

void loop() {
  // put your main code here, to run repeatedly:

}
