// Topic: STL list
// A doubly linked list: push_back(), iterating, and (commented) pop, remove,
// sort, merge and reverse.

#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // zero length list
    list1.push_back(9);
    list1.push_back(3);
    list1.push_back(1);
    list1.push_back(7);
    list1.push_back(5);
    display(list1);

    // removing elements from the list
    //  list1.pop_back();
    //  list1.pop_front();
    //  list1.remove(5);

    // sorting the list
    // list1.sort();
    // display(list1);

    list<int> list2(4); // list of 4 zero-initialized elements
    list<int>::iterator iter = list2.begin();
    *iter = 20;
    iter++;
    *iter = 40;
    iter++;
    *iter = 60;
    iter++;
    *iter = 80;
    iter++;
    display(list2);

    // sort+merge
    //  list1.sort();
    //  list1.merge(list2);
    //  cout << "List1 after merging: ";
    //  display(list1);

    // reverse the list
    // list2.reverse();
    // display(list2);

    return 0;
}
