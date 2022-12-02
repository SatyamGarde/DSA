// A.P= (3 * n + 7)

#include <iostream>
using namespace std;

int AP(int n){
    int AP=(3 * n + 7);
    return AP;
}

int main() {
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    cout<<"A.P of the value n is "<<AP(n)<<endl;
}