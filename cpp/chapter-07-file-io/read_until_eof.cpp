// Topic: Reading a whole file line by line
// Reads every line until the end of the file.
// Note: Loop on while (getline(in, line)), not while (!in.eof()). The eof()
//       version prints an extra empty line.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("sample.txt");
    string st;
    // while (in.eof() == 0) { getline(in, st); ... }  <- prints one extra empty line
    while (getline(in, st)) // stops as soon as a read fails
    {
        cout << st << endl;
    }
     
    in.close();

    return 0;
}
