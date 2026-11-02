// Topic: File I/O: write then read
// Writes your name to a file with ofstream, then reads it back with ifstream.
// Note: Close the writer before reading, or the data may not have reached the
//       file yet.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream oggy("name.txt");
    string name;
    cout << "Enter your name: ";
    cin >> name;
    oggy << "My name is " << name << endl;
    oggy.close(); // flush to disk before reading it back

    ifstream oggy1("name.txt");
    string st;
    getline(oggy1, st);
    cout << st << endl;
    oggy1.close();

    return 0;
}
