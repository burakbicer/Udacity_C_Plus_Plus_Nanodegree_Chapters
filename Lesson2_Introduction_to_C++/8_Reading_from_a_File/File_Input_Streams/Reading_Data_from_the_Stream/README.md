## Reading Data from the Stream

If the input file stream object has been successfully created, the lines of the input stream can be read using the `getline` method. In the cell below, a while loop has been added to the previous example to get each line from the stream and print it to the console.

```c++
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream my_file;
    my_file.open("files/1.board");
    if (my_file) {
        std::cout << "The file stream has been created!" << "\n";
        std::string line;
        while (getline(my_file, line)) {
            std::cout << line << "\n";
        }
    }
}
```

## Recap
That's it! To recap, there are essentially four steps to reading a file:

1. `#include <fstream>`
2. Create a `std::ifstream` object using the path to your file.
3. Evaluate the `std::ifstream` object as a `bool` to ensure that the stream creation did not fail.
4. Use a `while` loop with `getline` to write file lines to a string.