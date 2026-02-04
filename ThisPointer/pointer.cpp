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
    Teacher(string name, string subject, string dept, double salary){  //constructor
        this->name = name;            // class variable = parameter
        this->subject = subject;     // class variable = parameter
        this->dept = dept;          // class variable = parameter
        this->salary = salary;     // class variable = parameter
    }
};

int main(){
Teacher t1("Prashant Sharma", "DSA", "CSE", 50000);
}