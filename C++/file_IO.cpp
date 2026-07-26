#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream oggy("sample60.txt");
    string name;
    cout << "Enter your name: ";
    cin >> name;
    oggy << "My name is " << name << endl;

    ifstream oggy1("sample60.txt");
    string st;
    getline(oggy1, st);
    cout << st;

    oggy.close();

    return 0;
}