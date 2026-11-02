// Topic: Virtual base class (diamond problem)
// Test and Sports both inherit Student virtually, so Result gets only one
// copy of Student.

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void print_roll_number()
    {
        cout << "Your roll number is " << roll_number << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int a)
    {
        score = a;
    }
    void print_score()
    {
        cout << "Your score is " << score << endl;
    }
};
class Result : public Test, public Sports
{
protected:
    float total;

public:
    void Display()
    {
        total = maths + physics + score;
        print_roll_number();
        print_marks();
        print_score();
        cout << "You total result is " << total << endl;
    }
};

int main()
{
    Result Arham;
    Arham.set_roll_number(1005);
    Arham.set_marks(78.5, 80);
    Arham.set_score(90);
    Arham.Display();
    return 0;
}
