// same as structure but, only one member can hold a value at a time.
#include <iostream>
using namespace std;

union student     //can be used inside the main()
{
    int age;
    float marks;
    char favChar;
};
int main()
{
    union student s1;
    // s1.favChar = 'a';
    s1.marks = 98;
    s1.age = 18;
    cout << s1.age; // overwrite on the place of marks
    return 0;
}