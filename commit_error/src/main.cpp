#include <Arduino.h>

// put function declarations here:
int myFunction(int, float);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(4, 5);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, float y) {
  return x + y;
}