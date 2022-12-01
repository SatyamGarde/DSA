/*
    1
   23
  345
 4567
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value"<<endl;
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
        
        int val=row;
        int colmn=1;
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
