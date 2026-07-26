#include <iostream>
using namespace std;

int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "Constructor is called for object number " << count << endl;
    }
    ~Num()
    {
        cout << "Destructor is called for object number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside our main function." << endl;
    cout << "Creating the first object." << endl;
    Num n1;
    {
        cout << "Entering the block." << endl;
        cout << "Creating two more objects." << endl;
        Num n2, n3;
        cout << "Exiting the block." << endl;
    }
    cout << "Back to main function" << endl;
    return 0;
}