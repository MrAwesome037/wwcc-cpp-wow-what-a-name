#include <iostream>
int main() {
    double temperature;
    char unit;
    std::cout << "Enter temperature value: "; 
    std::cin >> temperature;
    std::cout << "Enter unit (C for Celsius, F for Fahrenheit): "; 
    std::cin >> unit;
    return 0;
}
