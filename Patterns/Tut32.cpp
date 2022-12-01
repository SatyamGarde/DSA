/*
1234
 234
  34
   4
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    int row=1;
    int colmn=1;
    while (row<=n)
    {
        int space=row-colmn;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        int colmn=1;
        int val=row;
        int val1=n-row+1;
        while (colmn<=val1)
        {
            cout<<val;
            val=val+1;
            colmn=colmn+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
}   