// Parameterized Constructor:- (Has parameters)
// Parameterized constructor lets you set data at object creation.
#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    string name;
    string subject;
    string dept;   
    Teacher(string n, string sub, string d, double sal){  //constructor
        name = n;
        subject = sub;
        dept = d;
        salary = sal;
    }
    void display(){
        cout << "Name = " << name << endl;
        cout << "Subject = " << subject << endl;
        cout << "Department = " << dept << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main(){
Teacher t1("Prashant Sharma", "DSA", "CSE", 50000);
t1.display();
}