// Yaha:
// Shape ek abstract class hai
// Uska object nahi ban sakta
// Child class ko draw() define karna hi padega
// Yeh real abstraction hai.


#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;   // pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle\n";
    }
};
