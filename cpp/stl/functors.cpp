#include <iostream>
#include <functional>
#include <algorithm> //for sort func
using namespace std;

int main()
{
    /*Function Objects (Functor) : A function wrapped in a class so that it is available
    like an object*/
    int array[] = {67, 89, 45, 34, 12, 1};
    cout << "Original array" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    sort(array, array + 6); // by default in ascending order (we can use keyword "less" too)
    cout << "Sorting in ascending order" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Sorting in descending order" << endl;
    sort(array, array + 6, greater<int>()); // for descending order
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}