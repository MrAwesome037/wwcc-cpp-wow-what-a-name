/*
 * Interactive Story Game - Totally Legit Spy Game
 * Author: Kieran K. Herrmann
 * Date: [6/12/26]
 *
 * ==== Project Features ====
 * Variables (3+ types): Lines __
 * If/else: Lines __
 * Switch: Line __
 * Loop: Lines __
 * Function w/ return value: Line __
 * Void function: Line __
 * Function w/ parameters: Line __
 * Vector or array: Lines __
 * Struct or class: Lines __
 * Enum: Lines __
 * File reading: Lines __
 * File writing: Lines __
 * Modern feature 1 (Range Based For Loop): Lines __
 * Modern feature 2 (____): Lines __
 * ==========================
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <string_view>
using namespace std;
enum class Items {
    Mistake_hating_watch,
    Can_O_Beans,
    Empty_Can_Of_Beans
};
ostream& operator<<(ostream& os, Items item) {
    switch (item) {
        case Items::Mistake_hating_watch:   os << "Mistake hating watch"; break;
        case Items::Can_O_Beans:   os << "Can O' Beans"; break;
        case Items::Empty_Can_Of_Beans:   os << "Can O' Beans but empty so its less fun"; break;
        default:           os << "Unknown"; break;
    }
    return os;
}
class Player{
  private:
    int health = 10;
    vector<Items> inventory = {Items::Mistake_hating_watch};
  public:
    Player(string n, bool s){
      string name = n;
      bool smart = s;
    }
    void take_Damage() {
      health -= 1;
    }
    void take_inventory(){
        for (Items item : inventory) {
            cout << item << " "; 
        }
    }
    bool has_item(Items i){
        for (Items item : inventory) {
            if(i == item){
                return true;
            }
        }
        return false;
    }
};
int main() {
    return 0;
}
