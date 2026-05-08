#include <iostream>

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#endif
void convertTemperature(double temp, char unit){
  std::cout << "The temperature is 72\xC2\xB0F" << std::endl;
}
int main() {
    // Platform-specific setup for Windows
    #if defined(_WIN32) || defined(_WIN64)
    SetConsoleOutputCP(CP_UTF8);
    #endif
    

    return 0;
}
