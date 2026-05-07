#include <iostream>
#include <cstdio>   // For printf
using namespace std;

int main() {
    int integer_value = 42;
    float float_value = 3.14159265f;
    double double_value = 3.14159265;
    char char_value = 'X';
    const char* string_value = "Hello, World!";

    printf("Format Specifier Practice\n");
    printf("------------------------\n\n");
    printf("Integer Formats \n");
    printf("%d", integer_value);
    printf("%x", integer_value);
    printf("%o", integer_value);
    printf("[%5d]", integer_value);
    printf("[%-5d]", integer_value);
    printf("%x", integer_value);
    printf("Integer Formats \n");
    printf("%f", float_value);
    printf("%.2f", float_value);
    printf("%e", float_value);
    printf("%.4g", float_value);
    printf("String Formats \n");
    printf("%c", char_value);
    printf("%s", string_value);
    printf("%20s", string_value);
    return 0;
}
