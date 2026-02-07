#include <iostream>
using namespace std;

/* ==============================
   1. SINGLE INHERITANCE
   One Parent -> One Child
================================ */

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B (Single Inheritance)" << endl;
    }
};

/* ==============================
   2. MULTILEVEL INHERITANCE
   Parent -> child -> grandChild
================================ */

class C : public B {
public:
    void showC() {
        cout << "Class C (Multilevel Inheritance)" << endl;
    }
};

/* ==============================
   3. HIERARCHICAL INHERITANCE
   One Parent -> Multiple Children
================================ */

class D : public A {
public:
    void showD() {
        cout << "Class D (Hierarchical Inheritance)" << endl;
    }
};

class E : public A {
public:
    void showE() {
        cout << "Class E (Hierarchical Inheritance)" << endl;
    }
};

/* ==============================
   4. MULTIPLE INHERITANCE
   Multiple Parents -> One Child
================================ */

class X {
public:
    void showX() {
        cout << "Class X" << endl;
    }
};

class Y {
public:
    void showY() {
        cout << "Class Y" << endl;
    }
};

class Z : public X, public Y {
public:
    void showZ() {
        cout << "Class Z (Multiple Inheritance)" << endl;
    }
};

/* ==============================
   5. HYBRID INHERITANCE
   Combination of Multiple + Multilevel
================================ */

class P {
public:
    void showP() {
        cout << "Class P" << endl;
    }
};

class Q : public P {
public:
    void showQ() {
        cout << "Class Q" << endl;
    }
};

class R : public P {
public:
    void showR() {
        cout << "Class R" << endl;
    }
};

class S : public Q, public R {
public:
    void showS() {
        cout << "Class S (Hybrid Inheritance)" << endl;
    }
};


int main() {

    // Single inheritance
    B obj1;
    obj1.showA();
    obj1.showB();

    // Multilevel inheritance
    C obj2;
    obj2.showA();
    obj2.showB();
    obj2.showC();

    // Hierarchical inheritance
    D obj3;
    E obj4;
    obj3.showA();
    obj4.showA();

    // Multiple inheritance
    Z obj5;
    obj5.showX();
    obj5.showY();
    obj5.showZ();

    // Hybrid inheritance
    S obj6;
    obj6.showQ();
    obj6.showR();
    obj6.showS();

    return 0;
}
