#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;

    // new keyword
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    // delete keyword
    // delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}

// ----------------------------------------------
// 🧠 Essential Notes on new and delete in C++
// ----------------------------------------------

// 1. 'new' → Allocates memory on the heap
//    Example: int* ptr = new int;

// 2. 'delete' → Deallocates memory allocated with 'new'
//    Use 'delete[]' for arrays
//    Example: delete[] arr;

// 3. Always pair memory operations:
//    new      ➝ delete
//    new[]    ➝ delete[]

// 4. Forgetting to use 'delete' causes memory leaks

// 5. Accessing memory after 'delete' causes undefined behavior

// ✅ Tip: Prefer smart pointers (like std::unique_ptr) in modern C++
