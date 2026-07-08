#include <iostream>
#include <list>
using namespace std;

int main()
{

    // creating list
    list<int> mylist;

    // Intersion
    // insert from rightmost
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);
    // insert from front
    mylist.push_front(5);
    mylist.push_front(1);

    cout << "Size before : " << mylist.size() << endl;

    cout << "List Before : ";
    list<int>::iterator it = mylist.begin();
    while (it != mylist.end())
    {
        cout << *it << " ";
        it++;
    }
    cout<<endl;

    // Removing
    mylist.pop_back();  // remove from back
    mylist.pop_front(); // remmove from front

    cout << "Size after : " << mylist.size() << endl;
    cout << "List After : ";
    list<int>::iterator it1 = mylist.begin();
    while (it1 != mylist.end())
    {
        cout << *it1 << " ";
        it1++;
    }

    cout << endl;

    // Removing all elements
    mylist.clear();
    if (mylist.empty() == true)
    {
        cout << "List is Empty" << endl;
    }
}