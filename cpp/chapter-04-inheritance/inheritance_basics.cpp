// Topic: Inheritance basics
// A Programmer class inherits id and salary from Employee.

#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int impID)
    {
        id = impID;
        salary = 36000;
    }
    Employee() {}
};
/* DERIVED CLASS SYNTAX
class derived_class_name : visibility_mode base_class_name
{
        class methods/ members...etc 
};

VISIBILITY MODE
1. default visibility mode is private.
2.Public visibility mode: public members of the base class become public members of derived class
3.Private visibility mode: public members of the base class become private members of derived class
4. private members are never inherited.
*/

// Creating a derived class
class programmer : public Employee
{
public:
    string languageName;
    programmer(int impID)
    {
        id = impID;
        languageName = "C++";
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee harry(20), hassan(45);
    cout << "Harry's salary is Rs " << harry.salary << endl;
    cout << "Hassan's salary is Rs " << hassan.salary << endl;
    programmer ALI(34);
    cout << "Ali is learning " << ALI.languageName << " and his employee id is "
         << ALI.id << endl;
    // ALI.getData();

    return 0;
}
