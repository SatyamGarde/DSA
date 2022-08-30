// Sum of Even n numbers
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value" << endl;
    cin >> n;
    int i = 2;
    int sum = 0;
    if (n % 2 == 0)
    {
        while (i <= n)
        {
            sum = sum + i;
            i = i + 1;
        }
    }
    else
    {
        cout << "The give number is not even" << endl;
    }

    cout << "The sum is" << sum << endl;
    return 0;
}