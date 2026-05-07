#include <iostream>
#include <iomanip>  // For setw()
using namespace std;

int main() {
    int start, end;

    cout << "Multiplication Table Generator" << endl << endl;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    if (start > end) {
        cout << "Error: Starting number must be less than ending number." << endl;
        return 1;
    }
    cout << endl;
    for(b = start; b <= end; ++b){
        for(a = start; a <= end; ++a){
          cout << setw(2) << a * b << " ";
        }
        cout << endl;
      }
    return 0;
}
