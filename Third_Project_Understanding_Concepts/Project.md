# C++ Practice with Arduino - Classes, References, Pointers, and Memory

## Overview

For today's practice, I tried organizing my Arduino project into multiple files instead of putting everything inside `main.cpp`. I made a simple `Human` class, created helper functions, calculated BMI, and printed the object's information through the Serial Monitor.

I also spent some time understanding references, pointers, `const`, and how memory works in C++. Most of the time was honestly spent trying to understand *why* C++ does things this way instead of just making the code work.

---

# What I Made

Project structure:

```text
src/
├── main.cpp
├── Human.h
├── Helper.h
└── Helper.cpp

include/
├── Human.h
└── Helper.h
```

The project can:

* Create a `Human` object.
* Calculate BMI.
* Print all the information of the object.
* Modify the object's values.
* Print the updated object again.

---

# Things I Practiced

## Classes

Created my own class called `Human`.

```cpp
class Human {
public:
    String name;
    int age;
    bool student;
    float weight;
    float height;
    float bmi;
    String address;
};
```

Then I created an object using a constructor.

```cpp
Human newHuman = makeHuman(...);
```

---

## Constructors

Instead of assigning every variable one by one, I used a constructor so everything is initialized when the object is created.

---

## References

I used references when printing the object.

```cpp
void printDetails(const Human& person)
```

I learned that using a reference means it doesn't make another copy of the object, which saves memory.

---

## const

I also learned why `const` is useful.

```cpp
const Human& person
```

It lets me read the object's values but prevents me from accidentally changing them inside the function.

If I actually want to modify the object, I simply remove `const`.

---

## Pointers

I also tried using pointers.

```cpp
const float* weightPtr = &parsonWeight;
const float* heightPtr = &parsonHeight;
```

Then passed the values like this.

```cpp
bmiCalculator(*weightPtr, *heightPtr);
```

This helped me understand that pointers store memory addresses, while `*` gets the value stored at that address.

---

## Multiple Files

Instead of putting everything inside `main.cpp`, I separated the project into:

* `Human.h`
* `Helper.h`
* `Helper.cpp`

This made the main file much cleaner.

---

# Output

The program first creates this object.

```text
Name: John Doe
Age: 16
Currently a Student
Weight: 50.50
Height: 1.67
BMI: 18.11
Address: New York
```

Then I modified some values.

```cpp
newHuman.name = "Mastah Shifu";
newHuman.age = 67;
newHuman.student = false;
newHuman.address = "China";
```

Then printed it again.

```text
Name: Mastah Shifu
Age: 67
Definitely Unemployed
Weight: 50.50
Height: 1.67
BMI: 18.11
Address: China
```

---

# Things I Learned Today

* Classes are like blueprints, while objects are the actual instances.
* Constructors make creating objects easier.
* Passing objects using references is more memory efficient than copying them.
* `const` is basically for read-only access.
* Pointers store addresses instead of actual values.
* Global variables stay in memory during the whole program.
* Local variables only exist while their function is running.
* Separating code into `.h` and `.cpp` files makes everything easier to organize.

---

# Problems I Encountered

* Forgot that declarations in `.h` and definitions in `.cpp` should match exactly.
* Accidentally mixed `float` and `int` in one function.
* Confused myself with pointers by trying to point a variable to itself.
* Had some linker errors because my function declaration didn't match its implementation.

After fixing those, the project compiled successfully.

