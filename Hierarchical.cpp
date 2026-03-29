#include <iostream>
using namespace std;

class A {
public:
    void showA() { cout << "A\n"; }
};

class B : public A {
public:
    void showB() { cout << "B\n"; }
};

class C : public A {
public:
    void showC() { cout << "C\n"; }
};

int main() {
    B obj1;
    C obj2;

    obj1.showA();
    obj2.showA();
}