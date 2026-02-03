// Real encapsulation =  private data (hiding) + controlled access

#include <bits/stdc++.h>
using namespace std;

class BankAccount{
private:
    double balance;
    string password;
    string accHolderName;
    string AccountNumber;

public:
    void setBalance(double b){
        balance = b;
    }
    int getBalance(){
        return balance;
    }

    void setName(string n){
        accHolderName = n;
    }
    string getName(){
        return accHolderName;
    }
};

int main(){
    
    return  0;
}