/*
A B C     //'A' +j-1
A B C
A B C
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        int colmn = 1;
        while(colmn<n)
        {
            char ch = 'A' + colmn - 1;
            cout<<ch;
            colmn= colmn +1;
        }
        cout<<endl;
        row = row +1;
    }
    
}