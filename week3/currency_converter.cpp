#include <iostream>
#include <print>
using namespace std;
double dollarToEuro(double amount){
  return amount * 0.85;
}
double dollarToPound(double amount){
  return amount * 0.74;
}
double dollarToYen(double amount){
  return amount * 110.33;
}
int getConversionCount(){
  return conversions;
}
int main() {
    int conversions = 0;
    int choice = 0;
    int amount;
    do{
      print("1. Convert to Euro");
      println("2. Convert to Pound");
      println("3. Convert to Yen");
      println("4. Exit");
      println("What is your choice? (1-4): ");
      cin >> choice;
      if(choice == 4){
        break;
      }
      println("How much?: ");
      cin >> amount;
      if(choice == 1){
        printf("%f USD is equal to %f EUR", amount, dollarToEuro(amount));
      }
      else if(choice == 2){
        printf("%f USD is equal to %f GBP", amount, dollarToPound(amount));
      }
      else if(choice == 3){
        printf("%f USD is equal to %f JPY", amount, dollarToYen(amount));
      }
      else{
        print("Wait, this isn't a valid option, try again.");
      }
    } while(choice != 4);
    return 0;
}
