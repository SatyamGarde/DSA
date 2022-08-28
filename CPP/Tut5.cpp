#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    if(ch>='A' && ch<='Z')
    {
        cout<<"This is upper case";
    }
    else if (ch>='a' && ch<='z')
    {
       cout<<"This is Lower case"<<endl;
    }
    else if (ch>='0' && ch<=9)
    {
        cout<<"This is Number"<<endl;
    }
    else
    {
        cout<<"Don't Know"<<endl;
    }
    return 0;
}