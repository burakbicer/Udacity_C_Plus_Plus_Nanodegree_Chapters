#include <iostream>
#include <string>
using std::cout;
using std::string;

// Write a function PrintStrings that takes two strings as arguments and prints both of them.
void PrintStrings(string a, string b)
{
    cout << a << " " << b << "\n";
}


int main() {
    string s1 = "C++ is";
    string s2 = "super awesome.";
    
    PrintStrings(s1, s2);
}