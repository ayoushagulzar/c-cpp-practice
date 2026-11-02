// Topic: Base class pointer to a derived object
// Without virtual, a base pointer calls the base version of a function even
// if it points to a derived object.
// Note: Compare with 02_virtual_function.cpp

// 🔹 Pointer to Derived Class – Quick Notes:

// 📌 Definition:
// A pointer to derived class is a pointer that can store the address of a derived class object.
//    e.g., Derived* ptr = &derivedObj; // Direct and safe

// ✅ Base class pointer can point to a derived class object (Upcasting).
//    e.g., Base* ptr = new Derived(); // Allowed and commonly used in polymorphism

// ❌ Derived class pointer CANNOT point to a base class object (Downcasting).
//    e.g., Derived* ptr = new Base(); // Not allowed — unsafe

// ✅ Use virtual functions in base class to enable runtime polymorphism.
//    Then, base class pointer will call derived class method dynamically.

#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
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
    Derived *derivedClass_pointer;
    derivedClass_pointer = &obj_derived;
    derivedClass_pointer->var_derived = 90;
    derivedClass_pointer->display();
    return 0;
}
