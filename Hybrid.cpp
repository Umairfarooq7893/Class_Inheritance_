#include<iostream>
using namespace std;

// Base Class
class A{
public:
    void showA(){
        cout << "Class A\n";
    }
};

// Derived from A (Multilevel)
class B : public A{
public:
    void showB(){
        cout << "Class B\n";
    }
};

// Another Base Class
class C{
public:
    void showC(){
        cout << "Class C\n";
    }
};

// Hybrid: D inherits from B and C (Multiple Inheritance)
class D : public B, public C{
public:
    void showD(){
        cout << "Class D\n";
    }
};

int main(){
    D obj;

    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();
}