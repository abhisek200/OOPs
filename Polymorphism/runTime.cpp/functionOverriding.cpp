// parent & child class has same function, diff works

#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent class function" << endl;
    }
};

class Child : public Parent {
public:
    void show() {   // override 
        cout << "Child class function" << endl;
    }
};
int main(){
    Parent p1;
    p1.show();   //output: Parent class function

    Child c1;
    c1.show();  //output: Child class function
}