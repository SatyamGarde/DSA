/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value " << endl;
    cin >> n;
    // for first Trangle
    int row = 1;
    while (row <= n)
    {

        int count = 1;
        int first = n - row + 1;
        while (first)
        {
            cout << count;
            count = count + 1;
            first = first - 1;
        }
        // Second triangle
        int colmn = 1;
        while (colmn < row)
        {
            cout << "*";
            colmn = colmn + 1;
        }
        // #Third Triangle
        int colmn1 = 1;
        while (colmn1 < row)
        {
            cout << "*";
            colmn1 = colmn1 + 1;
        }
        // #Fourth Triangle
        int count1 = n - row + 1;
        int colmn2 = 1;
        while (colmn2 <= count1)
        {
            cout << count1;
            count1 = count1 - 1;
        }

        cout << endl;
        row = row + 1;
    }
}

