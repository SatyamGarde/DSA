#include <iostream>
using namespace std;
int c=100;
int main()
{
    int a, b, c;
    cout << "Enter the Intiger Values" << endl;
    cin >> a;
    cin >> b;
    c = a + b;
    cout << "The sum is" << c << endl;
    cout<<"The val of local c is"<<c<<endl;
    cout<<"The val of Global c is "<<::c;
    return 0;
}