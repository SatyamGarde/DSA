#include <iostream>
using namespace std;
int main() {
    
    int a, b;
    cout<<"Enter the values of 'a' and 'b' "<<endl;
    cin>>a;
    cin>>b;

    char op;
    cout<<"enter the operator"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"addition is "<<(a+b)<<endl;
        break;

    case '-':
        cout<<"Substraction is "<<a-b<<endl;
        break;

    case '*':
        cout<<"Multiplication is "<<a*b<<endl;
        break;        
    
    case '/':
        cout<<"division is "<<a/b<<endl;
        break;

    case '%':
        cout<<"Remainder is "<<a%b<<endl;
        break;    
    
    }
}