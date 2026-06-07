#include <iostream>
#include <string>
using namespace std;
class Rectangle {
  private:
    int length;
    int width;
  public:
      Rectangle(int l, int w) {
          length = l;
          width = w;
      }
  int get_width() const{
    return width;
  }
  int get_length() const{
    return length;
  }
  double area(){
   return length * width * 1.00;
  }
  void set_length(int l){
    if(l <= 0){
      print("Invalid length");
    else{
      length = l;
    }
  }
  void set_width(int w){
    if(w <= 0){
      print("Invalid width");
    else{
      width = w;
    }
  void area(int a)
class Circle {
    private:
    int radius;
  public:
      Circle(int r) {
          radius = r;
      }
  int get_radius() const{
    return radius;
  }
double get_area() const{
  return radius * radius * 3.14159;
}
double get_circumference() const{
  return 2 * radius * 3.14159;
}
void set_radius(int r){
    if(r <= 0){
      print("Invalid radius");
    else{
      radius = r;
    }
  void print(){
    printf("Radius: #d", radius);
    printf("Area: #f", get_area());
    printf("Circumference: #f", get_circumference());
}
void print(boolean t){
    if(t == true){
      printf("Radius: #d", radius);
      printf("Area: #d ^2 * 3.14159 = #f", radius, get_area());
      printf("Circumference: #d * 2 * 3.14159 = #f", radius, get_circumference());
    }
}
int main() {
    return 0;
}
