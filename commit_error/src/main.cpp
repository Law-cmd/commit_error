#include <Arduino.h>

// put function declarations here:
int myFunction(float, float);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(1, 2);
}

void loop() {
  printf("david is dumm");
}

// put function definitions here:
int myFunction(float x, float y) {
  return x + y;
}
