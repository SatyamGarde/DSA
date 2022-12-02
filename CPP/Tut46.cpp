// To find nCr

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for (int i = 0; i <=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r) {
    int num = factorial(n);
    int denom = factorial(r)* factorial(n-r);

    return num/denom;
}
int main() {
    int n, r;
    cout<<"Enter the numbers"<<endl;
    cin>>n;
    cin>>r;
    cout<<"answer is "<<nCr(n,r);

    
}