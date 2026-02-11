#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {   // virtual added
        cout << "Parent class function" << endl;
    }
};

class Child : public Parent {
public:
    void show() {   // override
        cout << "Child class function" << endl;
    }
};

int main() {
    Parent* ptr;      // parent pointer
    Child c1;        

    ptr = &c1;       // child object assigned
    ptr->show();      // decision will be on run time

    return 0;
}
