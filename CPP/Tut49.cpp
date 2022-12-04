// fibonacci series (0,1,1,2,3,5,8,13,...)

#include <iostream>
using namespace std;

int feb(int n)
{
    int a=0;
    int b=1;
    int c=0;
    int count = 1;
    for (int c = 0; c <= n; c++)
    {
        c= a + b;
        a=b;
        b=c;
        
    }
    return c;
}
int main() {
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    cout<<"Febonacci series is"<<feb(n)<<endl;

}