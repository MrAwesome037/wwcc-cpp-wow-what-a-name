#include <iostream>

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#endif

int main() {
    // Platform-specific setup for Windows
    #if defined(_WIN32) || defined(_WIN64)
    SetConsoleOutputCP(CP_UTF8);
    #endif

    // Standard UTF-8 degree symbol sequence
    std::cout << "The temperature is 72\xC2\xB0F" << std::endl;

    return 0;
}
