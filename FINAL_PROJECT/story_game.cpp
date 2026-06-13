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
    int health = 5;
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
    void add_item(Items item){
        inventory.push_back(item);
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
    printf("\n");
    bool ending = false;
    string name;
    bool smart = true;
    string decision;
    float progress = 0.0;
    bool left = true;
    printf("Welcome to the 'Totally Legit Spy Game'!\n");
    printf("Your mission is to infiltrate ze bad guys base and steal the Legendary %s\n", item_string(Items::McGuffin));
    printf("It would be easy if not for your purchase of the %s \n", item_string(Items::Mistake_hating_watch));
    printf("So now you have to go through their entire lair with it and the help of your trusty Gun, that you forgot to load (nice one) \n");
    printf("But before we get started, whats your name? Secret Agent one or otherwise?: \n");
    getline(cin, name);
    printf("Alright, next question, are you smart? (true for yes, false for no): \n");
    cin >> decision;
    if(decision == "true"){
        printf("Then you should be fine. \n");
        smart = true;
    } else if(decision == "false"){
        printf("Uh, y-you'll be fine. \n");
    }else{
        printf("Thats not a viable answer so I'm putting false. \n");
        smart = false;
    }
    Player p = Player(name,smart);
    printf("Now with that out of the way, lets go! \n");
    while(!ending){
        if(progress < 1.0){
            printf("You arrive at the entrance to the base, but there's a gaurd doing his job for once, so how will you take care of him? \n");
            printf("Enter the number of the option you want to do.\n");
            printf("1. Use your Gun (which you forgot to load) \n");
            printf("2. Search for something to use \n");
            printf("3. Sit around and do nothing \n");
            cin >> decision;
            if(decision == "1"){
                printf("You throw your gun really hard, it hits the gaurd and snaps his neck, meaning there's no more gaurd! :D\n");
                printf("You pick up your gun and continue onward. \n");
                progress += 1.0;
            }else if(decision == "2"){
                printf("You search the surrounding area and find a Can O' Beans \n");
                printf("This won't really help you but its beans, do you want it? \n");
                printf("Yes or No?");
                cin >> decision;
                if(decision == "Yes"){
                    printf("You eat the beans, it did nothing but was pretty tasty, and you get 0.1 more progress \n");
                    progress += 0.1;
                    printf("And the empty can of beans");
                    p.add_item(Items::Empty_Can_Of_Beans);
                }else if(decision == "No"){
                    printf("The bean can empties itself out of sadness, you monster.\n");
                }else{
                    printf("Your brain short circuits \n");
                    p.take_Damage();
                    printf("The beans seem dissapointed in you. \n");
                    printf("But it will accompany you :D");
                    p.add_item(Items::Can_O_Beans);
                }
            }else if(decision == "3"){
                printf("You do nothing.\n");
                printf("Nothing happens \n");
                printf("Incredible \n");
            }else{
                printf("You charge right at the gaurd and he smacks you back into the bushes \n");
                p.take_Damage();
                printf("Just look at the options man \n");
            }
        }else if(progress < 2.0){
            printf("You go through the base and come across a split path, which one will you take? \n");
            printf("Enter the number of the option you want to do.\n");
            printf("1. Go to the left \n");
            printf("2. Go to the right \n");
            printf("3. Sit around and do nothing \n");
            cin >> decision;
            if(decision == "1"){
                printf("You go left \n");
            }else if(decision == "2"){
                printf("You go right \n");
            }else if(decision == "3"){
                printf("You do nothing.\n");
                printf("Nothing happens \n");
                printf("Incredible \n");
            }else{
                printf("You try and run down the middle, straight into a wall. \n");
                p.take_Damage();
                printf("Please pick an option that actually shows up next time \n");
            }
        }else if(progress < 3.0){
            if(left){
                printf("After going left, you see a gaurd dog napping, how will you get past it? \n");
                printf("Enter the number of the option you want to do.\n");
                printf("1. Sneak around it \n");
                printf("2. Go play with it \n");
                printf("3. Sit around and do nothing \n");
                cin >> decision;
                if(decision == "1"){
                    printf("You quietly tip toe pass the dog without it waking up, all that spy training wasn't for nothing. \n");
                }else if(decision == "2"){
                    printf("You go to play with it, it wakes up and... \n");
                    printf("It mauls you because that's it job, duh");
                    p.take_Damage();
                }else if(decision == "3"){
                    printf("You do nothing.\n");
                    printf("Nothing happens. \n");
                    printf("Incredible. \n");
                }else{
                    printf("You scream and run right at the dog, it mauls you. \n");
                    p.take_Damage();
                    printf("Just pick an option \n");
                }
            }else if(!left){
                printf("You go through the base and come across a split path, which one will you take? \n");
                printf("Enter the number of the option you want to do.\n");
                printf("1. Go to the left \n");
                printf("2. Go to the right \n");
                printf("3. Sit around and do nothing \n");
                cin >> decision;
                if(decision == "1"){
                    printf("You go left \n");
                }else if(decision == "2"){
                    printf("You go right \n");
                }else if(decision == "3"){
                    printf("You do nothing.\n");
                    printf("Nothing happens \n");
                    printf("Incredible \n");
                }else{
                    printf("You try and run down the middle, straight into a wall. \n");
                    p.take_Damage();
                    printf("Please pick an option that actually shows up next time \n");
                }
            }else{
                printf("wut \n");
                ending = true;
            }
        }
        if(p.view_health() <= 0){
            printf("You died, bruh \n");
            printf("Bad Ending for you, the Boring Ending, cuz you died.");
            ending = true;
        }
        ending = true;
    }
    return 0;
}
