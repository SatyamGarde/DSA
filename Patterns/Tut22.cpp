/*
A B C     //'A' +j-1
B C D
C D E
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
        while(colmn<=n)
        {
            char ch = row + colmn -2 + 'A';
            cout<<ch;
            ch=ch+1;
            
            colmn= colmn +1;
        }
        cout<<endl;
        row = row +1;
    }
    
}