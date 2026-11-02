// Topic: Reading a line from a file
// Reads the first line of a file with getline().

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st;
    // Opening files using constructor and reading it
    ifstream in("sample.txt"); // Read operation
    getline(in, st);
    cout << st;

    return 0;
}
