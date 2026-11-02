// Topic: Arrays and pointer arithmetic
// Reads array values and addresses through *(p + i).

#include <iostream>
using namespace std;
int main()
{
    int marks[] = {22, 33, 44, 55, 66, 77, 88};
    int *p = marks;
    int i = 0;
    while (i < 7)
    {
        cout << marks[i] << endl;
        i++;
    }
    cout << "The values at marks array are the following" << endl;
    cout << "The value at marks[0] is " << *p << endl;
    cout << "The value at marks[1] is " << *(p + 1) << endl;
    cout << "The value at marks[2] is " << *(p + 2) << endl;
    cout << "The value at marks[3] is " << *(p + 3) << endl;
    cout << "The value at marks[4] is " << *(p + 4) << endl;
    cout << "The value at marks[5] is " << *(p + 5) << endl;
    cout << "The value at marks[6] is " << *(p + 6) << endl;

    cout << "The addreses at marks array are the following" << endl;
    cout << "The address at marks[0] is " << p << endl;
    cout << "The address at marks[1] is " << (p + 1) << endl;
    cout << "The address at marks[2] is " << (p + 2) << endl;
    cout << "The address at marks[3] is " << (p + 3) << endl;
    cout << "The address at marks[4] is " << (p + 4) << endl;
    cout << "The address at marks[5] is " << (p + 5) << endl;
    cout << "The address at marks[6] is " << (p + 6) << endl;
    return 0;
}
