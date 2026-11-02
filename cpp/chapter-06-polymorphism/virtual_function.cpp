// Topic: Virtual functions
// Marking display() virtual makes the base pointer call the derived version
// (runtime polymorphism).

#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    virtual void display()
    {
        cout << "Base class variable is " << var_base << endl;
    }
};
class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "Base class variable is " << var_base << endl;
        cout << "Derived class variable is " << var_derived << endl;
    }
};
int main()
{
    Base *baseClass_pointer;
    Derived obj_derived;
    baseClass_pointer = &obj_derived; // pointing base class pointer to derived class
    baseClass_pointer->var_base = 25;
    baseClass_pointer->display();
    // Derived *derivedClass_pointer;
    // derivedClass_pointer = &obj_derived;
    // derivedClass_pointer->var_derived = 90;
    // derivedClass_pointer->display();
    return 0;
}
