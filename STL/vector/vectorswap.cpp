#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> first;
    vector<int> second;

    first.push_back(11);
    first.push_back(12);
    first.push_back(13);
    first.push_back(14);

    second.push_back(21);
    second.push_back(22);
    second.push_back(23);
    second.push_back(24);

    cout << "Before Swapping : " << endl;
    cout << "First :";

    vector<int>::iterator b1 = first.begin();
    while (b1 != first.end())
    {
        cout << *b1 << " ";
        b1++;
    }

    cout << "\nSecond :";
    vector<int>::iterator b2 = second.begin();
    while (b2 != second.end())
    {
        cout << *b2 << " ";
        b2++;
    }
    // swapping
    first.swap(second);

    cout << "\nAfter Swapping : " << endl;
    cout << "First :";

    vector<int>::iterator i1 = first.begin();
    while (i1 != first.end())
    {
        cout << *i1 << " ";
        i1++;
    }

    cout << "\nSecond :";
    vector<int>::iterator i2 = second.begin();
    while (i2 != second.end())
    {
        cout << *i2 << " ";
        i2++;
    }
        return 0;
    }