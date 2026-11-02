// Topic: Constructor initialization list
// Initializes members with : a(i), b(i + j) before the constructor body runs.

#include <iostream>
using namespace std;
// Constructor using initialization list: a(i), b(j)
// This is more efficient than assigning inside constructor body

// Members are initialized in the order they are declared in the class, not in the order in the initializer list

// Avoid initializing one member using another declared later (e.g., a(i + b)) – can lead to undefined behavior

// Initialization list is required for const, reference, and non-default-constructible members
class Test
{
	int a;
	int b;

public:
	Test(int i, int j) : a(i), b(i + j)
	{
		cout << "Constructor is called!" << endl;
		cout << "The value of a is " << a << endl;
		cout << "The value of b is " << b << endl;
	}
};
int main()
{
	Test T(20, 67);
	return 0;
}
