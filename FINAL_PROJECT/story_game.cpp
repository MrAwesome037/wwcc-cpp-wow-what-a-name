/*
 * Interactive Story Game - Totally Legit Spy Game
 * Author: Kieran K. Herrmann
 * Date: [Submission Date]
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
 * Modern feature 1 (____): Lines __
 * Modern feature 2 (____): Lines __
 * ==========================
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class Player{
  private:
    int health = 10;
    vector<string> inventory = {"Watch that hurts you when you make a mistake"};
  public:
    Player(string n, bool s){
      string name = n;
      bool smart = s;
    }
    void take_Damage() {
      health -= 1;
    }
    void print_inventory(){
        for (string item : inventory) {
        cout << item << " "; 
        }
    }
};
int main() {
    return 0;
}
