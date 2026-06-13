/*
 * Interactive Story Game - Totally Legit Spy Game
 * Author: Kieran K. Herrmann
 * Date: [6/12/26]
 *
 * ==== Project Features ====
 * Variables (3+ types): Lines 84-91
 * If/else: Lines 106 and beyond
 * Switch: Line 40
 * Loop: Lines 98 and beyond
 * Function w/ return value: Line 62
 * Void function: Line 58
 * Function w/ parameters: Line 70 & 73
 * Vector: Lines 52
 * Class: Lines 49 - 81
 * Enum: Lines 32 - 38
 * File reading: Lines 92-101
 * File writing: Lines 301 - 308
 * Modern feature 1 (Range Based For Loop): Lines 66-68, 74-78
 * Modern feature 2 (Auto): Line 306
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
    bool bean_choice = false;
    bool first_choice = true;
    ifstream file("story.txt");
    if (!file.is_open()){
        cerr << "Errrrrrrrr: Could not open the file." << endl;
        return 0;
    }
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
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
            if(first_choice){
                printf("You arrive at the entrance to the base, but there's a guard doing his job for once, so how will you take care of him? \n");
                first_choice = false;
            }else{
                printf("The guard is still guarding.\n");
            }
            printf("Enter the number of the option you want to do.\n");
            printf("1. Use your Gun (which you forgot to load) \n");
            printf("2. Search for something to use \n");
            printf("3. Sit around and do nothing \n");
            cin >> decision;
            if(decision == "1"){
                printf("You throw your gun really hard, it hits the guard and snaps his neck, meaning there's no more guard! :D\n");
                printf("You pick up your gun and continue onward. \n");
                progress += 1.0;
                first_choice = true;
            }else if(decision == "2" and bean_choice == false){
                bean_choice = true;
                printf("You search the surrounding area and find a Can O' Beans \n");
                printf("This won't really help you but its beans, do you want it? \n");
                printf("Yes or No? \n");
                cin >> decision;
                if(decision == "Yes"){
                    printf("You eat the beans, it did nothing but was pretty tasty, and you get 0.1 more progress...and the empty can of beans. \n");
                    progress += 0.1;
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
            }else if(decision == "2" and bean_choice){
                printf("You look around for something else, and find nothing.\n");
                printf("The nothing was added to your inventory.\n");
            }else if(decision == "3"){
                printf("You do nothing.\n");
                printf("Nothing happens \n");
                printf("Incredible \n");
            }else{
                printf("You charge right at the guard and he smacks you back into the bushes \n");
                p.take_Damage();
                printf("Just look at the options man \n");
            }
        }else if(progress < 2.0){
            if(first_choice){
                printf("You go through the base and come across a split path, which direction will you go? \n");
                first_choice = false;
            }else{
                printf("The path is still split.\n");
            }
            printf("Enter the number of the option you want to do.\n");
            printf("1. Go to the left \n");
            printf("2. Go to the right \n");
            printf("3. Sit around and do nothing \n");
            cin >> decision;
            if(decision == "1"){
                printf("You go left \n");
                progress += 1.0;
                first_choice = true;
            }else if(decision == "2"){
                printf("You go right \n");
                left = false;
                progress += 1.0;
                first_choice = true;
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
                if(first_choice){
                    printf("After going left, you see a guard dog napping, how will you get past it? \n");
                    first_choice = false;
                }else{
                    printf("The dog is still napping.\n");
                }
                printf("Enter the number of the option you want to do.\n");
                printf("1. Sneak around it \n");
                printf("2. Go play with it \n");
                printf("3. Sit around and do nothing \n");
                cin >> decision;
                if(decision == "1"){
                    printf("You quietly tip toe pass the dog without it waking up, all that spy training wasn't for nothing. \n");
                    progress += 1.0;
                    first_choice = true;
                }else if(decision == "2"){
                    printf("You go to play with it, it wakes up and... \n");
                    printf("It mauls you because that's it job, duh");
                    p.take_Damage();
                }else if(decision == "3"){
                    printf("You do nothing.\n");
                    printf("Nothing happens. \n");
                    printf("As usual. \n");
                }else{
                    printf("You scream and run right at the dog, it mauls you. \n");
                    p.take_Damage();
                    printf("Just pick an option \n");
                }
            }else if(!left){
                if(first_choice){
                    printf("Its a laser field because of course this evil base has one. \n");
                    first_choice = false;
                }else{
                    printf("The lasers are still lasering.\n");
                }
                printf("Enter the number of the option you want to do.\n");
                printf("1. Use your super spy skills to dodge all the lasers \n");
                printf("2. Use the off switch \n");
                printf("3. Sit around and do nothing \n");
                cin >> decision;
                if(decision == "1"){
                    printf("The lasers start moving just before you go and nip your foot. \n");
                    p.take_Damage();
                }else if(decision == "2"){
                    printf("You turn off the lasers and just walk through, pretty easy. \n");
                    progress += 1.0;
                    first_choice = true;
                }else if(decision == "3"){
                    printf("You do nothing.\n");
                    printf("Nothing happens \n");
                    printf("As usual. \n");
                }else{
                    printf("You scream and run right through into the lasers. \n");
                    p.take_Damage();
                    printf("The numbers, choose one of the numbers. \n");
                }
            }else{
                printf("wut \n");
                ending = true;
            }
        }else if(progress < 4.0){
            if(first_choice){
                printf("After a long hard infiltration, you see the McGuffin, but then the Boss shows up. \n");
                printf("What's worse is that he has a gun he didn't forget to load, its do or die, what will you do?");
                first_choice = false;
            }else{
                printf("The boss is still bossing.\n");
            }
            printf("Enter the number of the option you want to do.\n");
            printf("1. Throw the gun at him \n");
            printf("2. Dance off! \n");
            printf("3. Sit around and do nothing \n");
            cin >> decision;
            if(decision == "1"){
                printf("You throw your gun at him, he catches it, throws it back, and it hits you on the head. \n");
                p.take_Damage();
            }else if(decision == "2"){
                printf("You start groovin on the dance floor, but the he starts goovin too. \n");
                printf("Luckily, you were trained to out groove people and eventually he dies.\n");
                progress += 1.0;
                ending = true;
                printf("You Win!\n");
                printf("You got The True Ending.");
            }else if(decision == "3"){
                printf("You do nothing.\n");
                printf("A meteor comes and obliterates the boss. \n");
                printf("Incredible \n");
                progress += 1.0;
                ending = true;
                printf("You Win!\n");
                printf("You got The Meteor Ending, because you planned that.");
            }else{
                printf("You curl up and start crying. \n");
                p.take_Damage();
                printf("Now is NOT when you should be giving up. \n");
            }
        }
        if(p.view_health() <= 0){
            printf("You died, bruh \n");
            printf("Bad Ending for you, the Boring Ending, cuz you died.");
            ending = true;
        }
    }
    ofstream out("stats.txt");
    if (!out) {
        cerr << "Errrrrrrrrrrr: could not write summary" << endl;
        return 0;
    }
    auto score = progress + p.view_health();
    out << name << " finished with score: " << score << endl;
    return 0;
}
