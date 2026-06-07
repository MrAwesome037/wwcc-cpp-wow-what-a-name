#include <iostream>
#include <string>
// A class for managing a bank account
class account {
public:
    string customerName;
    double money;
    bool open;
    int acc_number;
    string type;

    void setup(string n, int num, string t) {
        customerName = n;
        money = 0;
        open = true;
        acc_number = num;
        type = t;
    }

    void deposit(double x) {
        money = money + x;
    }

    void withdraw(double x) {
        money = money - x;
    }

    void do_interest() {
        if (type == "savings") {
            money = money * 1.03;
        } else if (type == "checking") {
            money = money * 1.01;
        } else if (type == "business") {
            money = money * 1.005;
        }
    }

    void print() {
        cout << "Account Number: " << acc_number << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: $" << money << endl;
        cout << "Account Type: " << type << endl;
        cout << "Status: " << (open ? "Open" : "Closed") << endl;
    }

    void close() {
        open = false;
    }

    double get_money() {
        return money;
    }
};
int main() {
    account acc1;
    acc1.setup("John Smith", 12345, "savings");

    acc1.deposit(1000);
    acc1.withdraw(250);
    acc1.do_interest();

    acc1.print();
    acc1.close();

    return 0;
}
