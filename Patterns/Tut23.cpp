/*
A B C
D E F
G H I
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int colmn=1;
        char val='A';
        while(colmn<=n)
        {
            cout<<val;
            val=val+1;
            colmn=colmn+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}