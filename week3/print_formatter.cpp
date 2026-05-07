#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string print(int num) {
    string x = to_string(num);
    int insertPos = x.length() - 3;
    while (insertPos > 0 && x[insertPos - 1] != '-') {
        x.insert(insertPos, ",");
        insertPos -= 3;
    }
    return x;
}

string print(double num) {
    num = setprecision(2) << num;
    return to_string(num);
}

string print(double num1, int num2) {
    num = setprecision(num2) << num1;
    return to_string(num1);
}

string print(string text) {
    for (int i = 0; i < text.length(); i++) {
        if (i == 0 || isspace(text[i - 1])) {
            text[i] = toupper(static_cast<unsigned char>(text[i]));
        }
    }
    return text;
}

int main() {
    string w = print(12345);
    string x = print(1.2345);
    string y = print(1.2345, 3);
    string z = print("he he he bleh");
    print(w);
    print(x);
    print(y);
    print(z);
    return 0;
}
