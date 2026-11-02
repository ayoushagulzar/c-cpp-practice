// Topic: Nesting member functions
// A binary-string class whose ones_complement() calls the private
// check_binary() first.

#include <iostream>
using namespace std;

class binary
{
    string s;
    void check_binary(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};
void binary ::read()
{
    cout << "Enter the binary number: ";
    cin >> s;
}
void binary ::check_binary()
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout << "Incorrect Binary Format!" << endl;
            exit(0);
        }
    }
}
void binary ::ones_complement()
{
    check_binary();
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary::display()
{
    cout << "Displaying your binary number" << endl;
    for (size_t i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}
