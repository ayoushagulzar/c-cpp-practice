#include <iostream>
using namespace std;

class binary
{
    string s;
    void check_binary(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::read()
{
    cout << "Enter the binary number: ";
    cin >> s;
}
void binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout << "Incorrect Binary Format!" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment()
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
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
    cout << "Display you binary number" << endl;
    for (int i = 0; i < s.length(); i++)
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
    b.ones_compliment();
    b.display();
    return 0;
}