#include <bits/stdc++.h>
using namespace std;

void fun(){
    static int x = 0;
    cout << "x : " << x << endl;
    x++;
}
int main(){
    fun(); //output: 0
    fun(); //output: 1
    fun(); //output: 2
    return 0;
}