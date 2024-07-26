#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string str = "Hello";
    std::vector<std::string> separatedStrings;

    // Iterate through each character in the string
    for (char c : str) {
        // Convert the character to a string and store it in the vector
        separatedStrings.push_back(std::string(0, c));
    }

    // Print the separated strings
    for (const std::string& s : separatedStrings) {
        std::cout << s << std::endl;
    }

    return 0;
}

