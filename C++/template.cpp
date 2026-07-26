#include <iostream>
using namespace std;

template <class temp>
class vector
{
public:
    temp *arr;
    int size;
    vector(int x)
    {
        size = x;
        arr = new temp[x];
    }
    temp dotProduct(vector &v)
    {
        temp d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0] = 3.5;
    v1.arr[1] = 5.6;
    v1.arr[2] = 7.3;

    vector<float> v2(3);
    v2.arr[0] = 15.6;
    v2.arr[1] = 45.9;
    v2.arr[2] = 9.4;

    float a = v1.dotProduct(v2);
    cout << "The dot product of the vectors is " << a;

    return 0;
}