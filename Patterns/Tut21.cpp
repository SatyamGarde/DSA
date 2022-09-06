/*
A B C     //'A' +j-1
D E F
G H I
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
        int start='A';
        while(colmn<=n)
        {
            char ch =start;
            cout<<ch;
            start=start+1;
            colmn= colmn +1;
        }
        cout<<endl;
        row = row +1;
    }
    
}