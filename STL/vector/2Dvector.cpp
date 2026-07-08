#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creating 2D vector
    vector<vector<int>> j_arr(4);
    // we can fix size of inner array by zero is assigned to all.
    vector<vector<int>> arr(4, vector<int>(5, 10));

    // printing size
    cout << "Total Rows :" << arr.size() << endl;       // bahar wale vector ka size
    cout << "Total Columns :" << arr[0].size() << endl; // inner vector ka size ; only for matrix ,not jaged array

    // initialising 2D vector   ...this is also called jagged array
    j_arr[0] = (vector<int>(3) = {10, 20, 30});
    j_arr[1] = (vector<int>(2) = {11, 22});
    j_arr[2] = (vector<int>(4) = {100, 200, 300, 400});
    j_arr[3] = (vector<int>(5) = {1, 2, 3, 4, 5});

    // printing 2D vector/array
     for (int i = 0; i < arr.size(); i++)
      {
          for (int j = 0; j < arr[i].size(); j++)
          {
              cout << arr[i][j] << " ";
          }
          cout << endl;
      }

      cout << endl;

      // printing jagged array
      cout << "JAGGED ARRAY : " << endl;
      for (int i = 0; i < j_arr.size(); i++)
      {
          for (int j = 0; j < j_arr[i].size(); j++)
          {
              cout << j_arr[i][j] << " ";
          }
          cout << endl;
      }
    // printing 2D vector/array using iterator

    for (vector<vector<int>>::iterator row = arr.begin(); row != arr.end(); row++)
    {
        for (vector<int>::iterator col = row->begin(); col != row->end(); col++)
        {
            cout << *col << " ";
        }
        cout << endl;
    }
}