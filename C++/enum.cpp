/* *************enum******************
it is a user-defined data type the let the user assign names to set of integers.
(by default starts from zero).
 */
#include <iostream>
using namespace std;
int main()
{
    enum             //can be used outside the main
    {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
    };
    cout << monday << endl
         << tuesday << endl
         << wednesday << endl
         << thursday << endl
         << friday;

    return 0;
}