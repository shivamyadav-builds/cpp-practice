#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // declaring a vector
    vector<int> marks;
    // declaring a vector with size
    vector<int> miles(10);
    // inialising a vector
    vector<int> distance(5, 3); // 3 has been inialised to all

    // using member function

    cout << *distance.begin() << endl;
    cout << *(distance.end() - 1) << endl;

    // inserting and removing element from an array

    marks.push_back(2);
    marks.push_back(5);
    marks.push_back(7);
    marks.push_back(8);

    cout << marks.size() << endl; // give size of vector marks

    marks.pop_back();

    cout << marks.size() << endl; // give size of vector marks after pop_back

    // accessing front and back(rightmost) element
    cout << marks.front() << endl;
    cout << marks.back() << endl;

    // as 5 element of distance vector are 3 ;we can reassign it

    distance[1] = 4;
    distance[2] = 5;
    distance[3] = 6;
    distance[4] = 7;

    // printing all elemennt of vector using iterator

    vector<int>::iterator it = distance.begin();
    while (it != distance.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    miles.push_back(10);
    miles.push_back(20);
    miles.push_back(30);
    miles.push_back(40);

    // inserting element at required index
    miles.insert(miles.begin(), 50);     // Beginning
    miles.insert(miles.begin() + 2, 99); // At index 2
    miles.insert(miles.end(), 100);      // End

    vector<int>::iterator is = miles.begin();
    while (is != miles.end())
    {
        cout << *is << " ";
        is++;
    }

    cout << endl;

    // clear all elements of an array

    miles.clear();

    cout << "SIZE :" << miles.size() << endl;

    if (miles.empty())
    {
        cout << "Vector is empty."<<endl;
    }
    else
    {
        cout << "Vector is not empty."<<endl;
    }

    return 0;
}