#include <iostream>
#include <cmath>
using namespace std;
double calculateDistance(double x1, double y1, double x2, double, y2){
  return sqrt((x₂ - x₁)**2 + (y₂ - y₁)**2);
}
int main() {
    double x1;
    double y1;
    double x2;
    double y2;
    cout << "Enter the First Point: ";
    cin >> "x1:" >> x1;
    cin >> "y1:" >> y1;
    cout << "Enter the Second Point: ";
    cin >> "x2:" >> x2;
    cin >> "y2:" >> y2;
    printf("The distance between (%f, %f) and (%f, %f) is %f", x1, y1, x2, y2, calculateDistance(x1,y1,x2,y2));
    return 0;
}
