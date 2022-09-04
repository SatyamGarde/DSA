/*
1
2 1
3 2 1
4 3 2 1
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
        int val = row;
        while (colmn <= row)
        {
            cout << val<<" ";
            val = val - 1; //also we can use 'i-j+1' formula
            colmn = colmn + 1;
        }
        cout << endl;
        row =row+ 1;
    }
}
