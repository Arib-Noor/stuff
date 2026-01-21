//Lab 2 Task 1

#include <iostream>
using namespace std;

int main() {
    float discount = 1;
    double purchaseAmount;
    bool is_associate = false;
    cout << "Enter total purchase amount: ";
    cin >> purchaseAmount;
    if (purchaseAmount > 500) {
        cout << "You are eligible for a 15% discount." << endl;
        discount += 0.15;
        if (is_associate == true) {
            cout << "You are eligible for an additional 10% discount as an associate." << endl;
            discount += 0.1;
        }
    }
    double finalAmount = (purchaseAmount / discount) * 1.13;
    cout << "Final amount after discount and tax: " << finalAmount << endl;
    return 0;
}
