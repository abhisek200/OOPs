#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called\n";
    }

    ~Demo() {
        cout << "Destructor called\n";
    }
};


int main() {
    static Demo d1;
    cout << "main fnx\n";
    return 0;
}

//output :
// constructor called
// main fnx 
// Destructor called