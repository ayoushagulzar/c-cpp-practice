// Topic: Multilevel inheritance
// Student -> Exam -> Result: each class builds on the one above it.

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam ::set_marks(float m1, float m2)
{
    math = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "The marks obtained in math are " << math << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (math + physics) / 2.0 << "%" << endl;
    }
};
int main()
{
    Result Zara;
    Zara.set_roll_number(1010);
    Zara.set_marks(90.5, 93);
    Zara.display_result();
    return 0;
}
