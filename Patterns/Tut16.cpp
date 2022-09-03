/*
1
2 3
4 5 6
7 8 9 10
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
        int count = 1;
        int val = row;
        while (colmn <= row)
        {
            cout << val;
            val=val+1;
            colmn = colmn + 1;
        }
        cout << endl;
        row = row + 1;
    }
}