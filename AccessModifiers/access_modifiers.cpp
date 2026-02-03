// What this shows
// • balance is private → direct access blocked
// • Functions are public → controlled access allowed

#include <iostream>
#include <string>
using namespace std;



class BankAccount{
private:                    //hidden - no one can touch it
    int balance;        

public:
    //setter
    void setBalance(double b){
        balance = b;
    }
    //getter
    int getBalance(){
        return balance;
    }
};

int main(){
BankAccount a;
a.setBalance(25000);
a.getBalance();
}