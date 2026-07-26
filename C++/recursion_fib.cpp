#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
int main()
{
    int a;
    cout << "Enter the position: ";
    cin >> a;
    cout << "The fibonacci at  position " << a << " is " << fibonacci(a);
    return 0;
}