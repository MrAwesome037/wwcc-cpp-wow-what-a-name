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
#include <print>
#include <type_traits>
#include <optional>
using namespace std;
enum class Items {
    Mistake_hating_watch,
    Gun,
    Can_O_Beans,
    Empty_Can_Of_Beans,
    McGuffin
};
string item_string(Items item) {
    switch (item) {
        case Items::Mistake_hating_watch: return "Watch that hurts you for making mistakes";
        case Items::Gun: return "Gun";
        case Items::Can_O_Beans: return "Can O' Beans";
        case Items::Empty_Can_Of_Beans: return "Empty Can Of Beans";
        case Items::McGuffin: return "McGuffin";
        default: return "Unknown";
    }
}
class Player{
  private:
    int health = 10;
    vector<Items> inventory = {Items::Mistake_hating_watch, Items::Gun};
  public:
    Player(string n, bool s){
      string name = n;
      bool smart = s;
    }
    void take_Damage() {
        printf("You took a point of damage because your watch hates you \n");
      health -= 1;
    }
    int view_health(){
        return health;
    }
    void take_inventory(){
        for (Items item : inventory) {
            cout << item_string(item) << " "; 
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
    bool ending = false;
    string name;
    bool smart = true;
    string decision;
    float progress = 0.0;
    printf("Welcome to the 'Totally Legit Spy Game'!\n");
    printf("Your mission is to infiltrate ze bad guys base and steal the Legendary %s\n", item_string(Items::McGuffin));
    printf("It would be easy if not for your purchase of the %s \n", item_string(Items::Mistake_hating_watch));
    printf("So now you have to go through their entire lair with it and the help of your trusty Gun, that you forgot to load (nice one) \n");
    printf("But before we get started, whats your name? Secret Agent one or otherwise?: \n");
    getline(cin, name);
    printf("Alright, next question, are you smart? (true for yes, false for no): \n");
    cin >> decision;
    if(decision == "true"){
        printf("Then you should be fine \n");
        smart = true;
    } else if(decision == "false"){
        printf("Uh, y-you'll be fine \n");
    }else{
        printf("Thats not a viable answer so I'm putting false. \n");
        smart = false;
    }
    Player p = Player(name,smart);
    printf("Now with that out of the way, lets go! \n");
    while(!ending){
        if(p.view_health() <= 0){
            printf("You died, bruh \n");
            printf("Bad Ending for you, the Boring Ending");
        }
        ending = true;
    }
    return 0;
}
