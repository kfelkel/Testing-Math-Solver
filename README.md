# Testing-Math-Solver

## Contributors
* Tommy Avetisyan
* Kyle Felkel

##Description
This is a test suite for a Math Solver written in C++. 
The test suite consists of Unit Tests found in the file 'C++ Math Helper tests.cpp' and automated testing and property based testing found in the file 'C++ Math Helper AutomtatedTests.cpp.' Testing ahcieved 100% line coverage and several failed tests indicate the presence of bugs in the original system.

##Tools
Tests were written in C++ and executed using Microsoft Visual Studio's built in testing framework.
Code Coverage was measured using the code coverage tool found in Microsoft Visual Studio Enterprise.

##Implementation
Implementation of tests involve method calls from 'Tests.cpp' which was added during this project. These calls are used to initialize objects, interact with private variables, perform method calls on the objects, and return values. These values are then verified using Assert statements and manually calculated values in the tests. 

##System Under Test (SUT)
The SUT is a console application written in C++ that takes the user's inputs to solve geometric shapes and give results such as parameter, area, base heights, or angles.The SUT was developed about 5 years ago and hasn’t been touched since. The code is all separated neatly into a class file system and has no comments. Minimal modifications were made to the original code.

Also included in the main directory is the project proposal and final report of results.
