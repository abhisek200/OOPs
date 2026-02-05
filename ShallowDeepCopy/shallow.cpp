// NOTE - t1.x and t2.x point to same memory.

#include <iostream>
using namespace std;

class Test {
public:
    int *x;

    Test(int val) {
        x = new int(val);
    }
    // default copy constructor → shallow copy
};

int main() {
    Test t1(10);
    Test t2 = t1;   // shallow copy

    *t2.x = 20;

    cout << *t1.x;  // prints 20 and 10 removed/replaced (this is prblm)
}
