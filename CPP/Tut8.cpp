// Sum of n prime numbers
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value" << endl;
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i < n)
    {
        if (n % i == 0)
        {

            cout << "The given number is not prime number" << endl;
        }

        else
        {
            cout << "The given number is prime number at "<<i << endl;
            sum = sum + i;
        }
        i = i + 1;
        
    }
    cout << "The sum is" << sum << endl;
    return 0;
}