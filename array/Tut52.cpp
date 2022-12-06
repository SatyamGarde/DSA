// Reverse the array 
#include <iostream>
using namespace std;
int reverse(int arr[],int size) {
    int start = 0;
    int end = size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<endl;
    
}

int printarray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int arr[5] = {1,2,3,5,7};
    int arr1[5]= {3,4,5,6,7};

    int size=5;

    reverse(arr,size);
    reverse(arr1,size);

    printarray(arr,size);
    printarray(arr1,size);
    return 0;
}