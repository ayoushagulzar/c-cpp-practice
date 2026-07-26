#include <iostream>
using namespace std;

class shopItem
{
    int Id;
    float Price;

public:
    void setData(int a, float b)
    {
        Id = a;
        Price = b;
    }
    void getData()
    {
        cout << "The Id of this item is " << Id << endl;
        cout << "The Price of this item is " << Price << endl;
    }
};
int main()
{
    int size = 3;
    shopItem *ptr = new shopItem[size];
    int p;
    float q;
    shopItem *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id and Price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item no: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}