// Yaha:
// balance hidden hai (private)
// User sirf withdraw() use karega
// Internal calculation hidden hai
// This is Abstraction.

#include <iostream>
using namespace std;

class ATM {
private:
    int balance = 5000;   // hidden data

public:
    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdraw successful\n";
        } else {
            cout << "Insufficient balance\n";
        }
    }
};
