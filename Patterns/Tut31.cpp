/*
    1
   22 
  333
 4444
 */
#include<iostream>
using namespace std;
int main()  
{
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        int colmn=1;
        int val=row;
        while(colmn<=row)
        {
            cout<<val;
            val=val+1;
            colmn=colmn+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}