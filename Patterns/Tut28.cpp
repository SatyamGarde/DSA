/*
****
***
**
*
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int val=n-row+1;
        int colmn=1;
        while (colmn<=val)
        {
            cout<<"*";
            colmn=colmn+1;
        }
        cout<<endl;
        row=row+1;
    }
    

}
