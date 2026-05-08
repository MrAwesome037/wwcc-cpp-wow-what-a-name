#include <iostream>

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#endif
void convertTemperature(double temp, char unit){
    if (char == "C") {
        printf("The temperature is %d\xC2\xB0F C", temp);
        printf("The temperature is %d\xC2\xB0F F", (temp * 4.5) + 32);
        printf("The temperature is %d\xC2\xB0F K", temp + 273.15);
    }
    else if (char == "F") {
        printf("The temperature is %d\xC2\xB0F F", temp);
        printf("The temperature is %d\xC2\xB0F C", (temp-32)/4.5);
        printf("The temperature is %d\xC2\xB0F K", ((temp-32)/4.5) + 273.15);
    }
    else if (char == "K") {
        printf("The temperature is %d\xC2\xB0F K", temp);
        printf("The temperature is %d\xC2\xB0F C", temp - 273.15);
        printf("The temperature is %d\xC2\xB0F F", ((temp-273.15)*4.5) + 32);
    }
    else{
      print("Invalid unit");
    }
}
int main() {
    // Platform-specific setup for Windows
    #if defined(_WIN32) || defined(_WIN64)
    SetConsoleOutputCP(CP_UTF8);
    #endif
    convertTemperature(37.37,"C");
    convertTemperature(37.37,"F");
    convertTemperature(37.37,"K");
    return 0;
}
