// Copy constructor:-
// constructor that creates a new object by copying another object of the same class.

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string name, int age) {   // parameterized constructor
        this->name = name;
        this->age = age;
    }

    Student(const Student &s) {  // copy constructor
        name = s.name;
        age = s.age;
    }
};

int main() {
    Student s1("Aayush", 21);
    Student s2 = s1;   // copy constructor called
}
