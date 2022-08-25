#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value of A";
    cin>>a;
    if(a>0)
    {
        cout<<"A is Positive"<<endl;

    }
    else if (a==0)
    {
        cout<<"A is Zero";

    }
    
    else
    {
        cout<<"A is Negative";
    }
    return 0;

}