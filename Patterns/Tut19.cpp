/*
AAA   // A+i-1
BBB
CCC
*/
#include <iostream>
using namespace std;
int main()
{
    int  n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int colmn =1;
        while (colmn<=n)
        {
            char ch='A'+row-1;
            cout<<ch;
            colmn = colmn+1;
        }
        cout<<endl;
        row=row +1;
    }
    
}
