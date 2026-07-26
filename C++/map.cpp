#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // Map is an associative array
    map<string, int> marks;
    // map will automatically sort it in ascending order
    marks["Tooba"] = 78;
    marks["Hassan"] = 86;
    marks["Ali"] = 60;
    marks.insert({"Hina", 74});

    map<string, int>::iterator itr;
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << " " << endl;
    }
    cout << endl;
    cout << "The size is: " << marks.size() << endl;
    cout << "The max size is: " << marks.max_size() << endl;
    cout << "The empty's return value is: " << marks.empty() << endl;

    return 0;
}