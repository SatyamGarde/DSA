// Sum of array
#include <iostream>
using namespace std;

int Sumof(int arr[], int n)
{
   ;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {

        
        sum = sum + arr[i];
    }
  
    return sum;
}
int main()
{
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
   int sum1= Sumof(arr, n);
   cout<<"The sum of array is "<<sum1;

    return 0;
}