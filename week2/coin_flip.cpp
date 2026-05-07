#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(time(0));

    int flips;
    int heads = 0;
    int tails = 0;

    cout << "Coin Flip Simulator" << endl;
    cout << "How many flips would you like to simulate? ";
    cin >> flips;
    for (int i = 1; i <= flips; i++) {
        int randomNum = rand() % 2;
        if(randomNum == 1){
          heads += 1;
        }
        else{
          tails += 1;
        }
    }
    printf("Heads: %d", heads);
    printf("Tails: %d", tails);
    return 0;
}
