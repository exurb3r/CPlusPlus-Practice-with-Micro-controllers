#ifndef HUMAN_H
#define HUMAN_H

#include <Arduino.h>

class Human {
public:
    String name;
    int age;
    boolean student;
    float weight;
    float height;
    float bmi;
    String address;

    Human(String n, int a, boolean s, float w, float h, float b, String add)
    {
        name = n;
        age = a;
        student = s;
        weight = w;
        height = h;
        bmi = b;
        address = add;
    }
};


#endif