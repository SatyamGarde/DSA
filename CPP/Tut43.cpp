#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mask=0;
    int ans=0;
    while(n!=0)
    {
        if(n=0) {
            cout<<"1"<<endl;
        }
        mask =(mask<<1) | 1;
        n>>1;
        ans=~n & mask;
    }
    cout<<ans<<endl;
}