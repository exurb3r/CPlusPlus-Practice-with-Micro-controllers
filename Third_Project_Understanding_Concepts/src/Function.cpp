#include <Class.h>

float bmiCalculator(const float weight, const float height ){
    float calculatedBMI = weight / ( height * height);
    return calculatedBMI;
}

void printDetails(const Human& person){
    Serial.print("Name: ");
    Serial.println(person.name);
    Serial.print("Age: ");
    Serial.println(person.age);

    if(person.student){
        Serial.println("Currently a Student");
    } else {
        Serial.println("Definitely Unemployed ");
    }
    Serial.print("Weight: ");
    Serial.println(person.weight);

    Serial.print("Height: ");
    Serial.println(person.height);

    Serial.print("BMI: ");
    Serial.println(person.bmi);

    Serial.print("Address: ");
    Serial.println(person.address);
}

Human makeHuman(  
    String name,
    int age,
    boolean student,
    float weight,
    float height,
    float bmi,
    String addresss 
    )
{
    return Human(name, age,student, weight, height, bmi, addresss);
}