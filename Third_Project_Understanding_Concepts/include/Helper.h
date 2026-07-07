#ifndef HELPER_H
#define HELPER_H

#include <Arduino.h>
#include "Class.h"

float bmiCalculator(float weight, float height);

void printDetails(const Human& person);

Human makeHuman(
    String name,
    int age,
    bool student,
    float weight,
    float height,
    float bmi,
    String address
);

#endif