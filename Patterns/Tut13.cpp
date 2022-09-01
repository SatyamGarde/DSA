/* for n=3   //not solved
123
456
789
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        int count=1;
        while(j<=n)
        {
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}