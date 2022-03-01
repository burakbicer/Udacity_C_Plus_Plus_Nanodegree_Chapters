#include <iostream>
using std::cout;

// There is a simple function to add two numbers and return the result below.

// Function declared and defined here.
int AdditionFunction(int i, int j) 
{
    return i + j;
}

int main() 
{
    auto d = 3;
    auto f = 7;
    cout << AdditionFunction(d, f) << "\n";
}