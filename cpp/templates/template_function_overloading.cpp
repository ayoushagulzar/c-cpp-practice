#include <iostream>
using namespace std;

void func(int a)
{
    cout << "I am func(): " << a;
}

template <class T>
void func(T a)
{
    cout << "I am templetised func(): " << a;
}
int main()
{
    func(5); // exact match takes first priority
    return 0;
}