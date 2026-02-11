// Har baar jab fun() call hota hai:
// x naya create hota hai
// Value 0 se start hoti hai
// Function khatam → x destroy
// Next call → phir se naya x = 0


#include <bits/stdc++.h>
using namespace std;

void fun(){
    int x = 0;       // static removed
    cout << "x : " << x << endl;
    x++;
}

int main(){
    fun(); //output: 0
    fun(); //output: 0
    fun(); //output: 0
    return 0;
}
