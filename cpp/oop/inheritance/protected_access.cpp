#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};
/*
Members               private derivation          public derivation          protected derivation
1.Private              NOT Inherited                NOT Inherited                NOT Inherited
2.Protected             private                       protected                   protected
3.Public                private                        public                     protected
*/
class Derived : protected Base
{
};
int main()
{
    Base base;
    Derived derived;
    // derived.a;            will not work cuz protected members can not be accessed directly

    return 0;
}