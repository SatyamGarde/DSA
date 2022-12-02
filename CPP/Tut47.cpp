// is prime or not
#include <iostream>
using namespace std;

bool isPrime(int n) {

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        else
            return 1;   
    }
    
} 

int main() {
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"This is prime number"<<endl;
    }
    else
        cout<<"not prime number"<<endl;
    
}