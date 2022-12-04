// printing fibonacci series (0,1,1,2,3,5,8,13,...)
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    cout << "Fibonacci series is " << endl
         << a << "," << b << ",";
    int nextnumber = 1;
    for(int i = 2; i < n; i++) //(n-3) because we already initilize two numbers we need only n number of output.
    {
        cout << nextnumber << ",";
        a = b;
        b = nextnumber;
        nextnumber = a + b;
    }
}
int main()
{
    int n;
    cout << "Enter a positive number: ";
    cin >> n;
    cout << fibonacci(n);

    return 0;
}

