#include <iostream>
using namespace std;

// Declare a function
int DemoConsoleOutput();

string AdditionalConsoleOutput();

// Start of the program
int main() {

    // Call i.e. invoke the function
    DemoConsoleOutput();

    return 0;

}

// Define i.e. implement the previously declared functions

string AdditionalConsoleOutput() {

    return "[More text from my AdditionConsoleOutput funnction]";

}
int DemoConsoleOutput() {

    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;

    cout << "Let's see if my function can be part of the output stream: " << AdditionalConsoleOutput() << "?" << endl;

    return 0;
}