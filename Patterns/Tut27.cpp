/*
    *
   **
  ***
 ****
 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value " << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {

        // print spaces
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // print stars
        int colmn = 1;
        while (colmn <= row)
        {
            cout << "*";
            colmn = colmn + 1;
        }

        cout << endl;
        row = row + 1;
    }
}