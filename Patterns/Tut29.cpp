/*
****
 ***
  **
   *
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int colmn = 1;
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int val = n-row + 1;
        while (colmn <=val)
        {
            cout << "*";
            colmn = colmn + 1;
        }
        cout << endl;
        row = row + 1;
    }
}