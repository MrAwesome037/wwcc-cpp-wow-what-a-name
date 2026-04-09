#include <iostream>
#include <string>
using namespace std;
int main() {
    std::string name;
    std::string password;
    std::cout << "Enter your name: "; 
    std::cin >> name;
    std::string firstSentence = "Hello " + std::to_string(name) + "! Welcome to C++!";
    std::cout << firstSentence
    std::cout << "Enter your password: "; 
    std::cin >> password;
    std::string secondSentence = std::to_string(name) + "! You should never share your password! (" + std::to_string(password) + ")";
    std::cout << secondSentence
    return 0;
}
