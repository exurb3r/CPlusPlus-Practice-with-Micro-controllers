LED Mode Controller

A small embedded systems project I made while learning Arduino, C++, and PlatformIO.

The goal of this project wasn't to build something complex, but to understand the basics of working with GPIO pins, buttons, functions, and organizing code into multiple source files instead of placing everything inside main.cpp.

The program uses the built-in LED on the Arduino Uno and a push button to cycle through different LED modes.

Features
LED OFF
LED ON (Stable)
Slow Blinking
Fast Blinking
Button-controlled mode switching
Serial Monitor status output
Helper functions separated into their own source file
What I Learned

This project helped me become more familiar with several embedded programming concepts, including:

Using pinMode(), digitalWrite(), and digitalRead()
Working with INPUT_PULLUP
Detecting button presses using state changes
Basic software debouncing
Organizing C++ code using header (.h) and source (.cpp) files
Creating reusable helper functions
<<<<<<< HEAD
Using the Serial Monitor for debugging
=======
Using the Serial Monitor for debugging
>>>>>>> 19bd77bc269ad8256bc923853b7da17c468a2a87
