// Non - parameterized constructor - (has No parameters)
#include <iostream>
using namespace std;

class BankAccount{
private:
    int balance;

public:
    BankAccount(){            //constructor created
        balance = 100;       //Intial value
    }    

    int getBalance(){
        return balance;
    }
};

int main(){

BankAccount acc;      //object created
cout << acc.getBalance();   //prints 100

}