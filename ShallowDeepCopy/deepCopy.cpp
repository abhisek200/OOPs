#include<iostream>
using namespace std;
class Test {
public:
    int *x;
    //normal constructor
    Test(int val) {
        x = new int(val);
    }
    //copy constructor (deep copy) 
    Test(const Test &t) {
        x = new int(*t.x);
    }
};

int main() {
    Test t1(10);
    Test t2 = t1;   // deep copy

    *t2.x = 20;

    cout << *t1.x;  // prints 10 ✅
}

//               ...........Real Life EXAMPLE...........
//                      #include <iostream>
//                      using namespace std;

//                      class Student {
//                      public:
//                          int *marks;

//                          // Normal constructor
//                          Student(int marks) {
//                              this->marks = new int(marks);
//                          }

//                          // Copy constructor (DEEP COPY)
//                          Student(const Student &s) {
//                              this->marks = new int(*s.marks);
//                          }

//                          // Display
//                          void display() {
//                              cout << *marks << endl;
//                          }
//                      };

//                      int main() {
//                          Student s1(90);
//                          Student s2 = s1;

//                          *s2.marks = 75;

//                          s1.display();  // 90
//                          s2.display();  // 75
//                      }
