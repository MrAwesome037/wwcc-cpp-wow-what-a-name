#include <iostream>
int main() {
    double temperature;
    char unit;
    std::cout << "Enter temperature value: "; 
    std::cin >> temperature;
    std::cout << "Enter unit (C for Celsius, F for Fahrenheit): "; 
    std::cin >> unit;
    if(unit == "F"){
        std::string sentence = std::to_string(temperature) + "°F is equal to " + std::to_string((temperature - 32) * 5/9) + "°C";
        std::cout << sentence;
    } else{
        std::string sentence = std::to_string(temperature) + "°C is equal to " + std::to_string((temperature * 9/5) + 32) + "°F";
        std::cout << sentence;
    }
    return 0;
}
