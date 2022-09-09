/*
D
C D
B C D
A B C D
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
        int colmn = 1;
        while (colmn <= row)
        {
            char ch = n+ colmn-row -1 + 'A';
            cout<<ch;
            colmn = colmn + 1;
        }
        cout << endl;
        row = row + 1;
    }
}