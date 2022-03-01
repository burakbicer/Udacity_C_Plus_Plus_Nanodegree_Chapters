/*
Exercise:
1. Write a function void ReadBoardFile which reads lines from a file. 
Write each line to cout, followed by a newline character "\n". 
The function should accept a string argument, which represents the path to the file. 
For now, since ReadBoardFile does not need to return anything, you can use a void return type.

2. Call ReadBoardFile from main using the argument "1.board".

Note: you will need to include the fstream class, 
and you may want to have using std::ifstream to use the ifstream object 
without having to write std:: in the rest of your code.
*/

#include <fstream>
#include <iostream>
#include <string>

using std::ifstream;

void ReadBoardFile(ifstream &my_file){
    std::cout << "The file stream has been created!" << "\n";
        std::string line;
        while (getline(my_file, line)) {
            std::cout << line << "\n";
        }
}

int main() {
    ifstream my_file;
    my_file.open("../files/1.board");
    if (my_file) {
        ReadBoardFile(my_file);
    }
}