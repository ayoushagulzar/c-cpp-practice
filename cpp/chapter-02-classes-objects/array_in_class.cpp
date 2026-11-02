// Topic: Arrays inside a class
// A shop class that stores item IDs and prices in member arrays.

#include <iostream>
using namespace std;
class shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};
void shop ::setPrice(void)
{
    cout << "Enter the ID of your item no " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter the price of your item no " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemID[i] << " is Rs " << itemPrice[i] << endl;
    }
}
int main()
{
    shop S1;
    S1.initcounter();
    S1.setPrice();
    S1.setPrice();
    S1.setPrice();
    S1.setPrice();
    S1.displayPrice();
    return 0;
}
