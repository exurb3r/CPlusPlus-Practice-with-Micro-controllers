#include <Class.h>
#include <Helper.h>
#include <Arduino.h>

const String parsonName = "John Doe";
const int parsonAge = 16;
const boolean parsonStudent = true;
const float parsonWeight = 50.5;
const float parsonHeight = 1.67;
const String parsonAddress = "New York";

void setup() {
  Serial.begin(9600);
  const float* weightPtr = &parsonWeight;
  const float* heightPtr = &parsonHeight;

  float parsonBMI = bmiCalculator( *weightPtr, *heightPtr);
  
  Human newHuman = makeHuman(
    parsonName, parsonAge, parsonStudent, parsonWeight, parsonHeight, parsonBMI, parsonAddress
  );

  printDetails(newHuman);
  newHuman.name = "Mastah Shifu";
  newHuman.age = 67;
  newHuman.student = false;
  newHuman.address = "China";

  printDetails(newHuman);

}

void loop() {

}
