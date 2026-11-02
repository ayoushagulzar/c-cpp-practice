// Topic: Structures in C++
// Groups related variables (name, age, marks) under one type. In C++ you
// don't need to write 'struct' when declaring a variable.

/* ************STRUCTURE**************
structure is a user defined data type use to group together related variables of diff data type
(called members) under one name. It is similar to class but by default, the members of the structure
are public.

SYNTAX: struct structureName{
      member variables;
      };
*/
#include <iostream>
#include <string>
using namespace std;

struct student // can be used inside the main()
{
    string name;
    int age;
    float marks;
};

int main()
{
    student s1;
    s1.name = "Aliya";
    s1.age = 16;
    s1.marks = 500;
    cout << s1.name << endl
         << s1.age << endl
         << s1.marks;
    return 0;
}
