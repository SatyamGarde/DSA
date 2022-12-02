// Counting total no. of notes required
#include <iostream>
using namespace std;
int main() {
    int amount =1234567891;
    int n500,n100,n20,n10,n1;
    n500=0,n100=0,n20=0,n10=0,n1=0;

    switch (amount>=500)
    {
    case 1:
        n500 = amount/500;
        amount=amount-(n500*500);
        break;
        
   
    }

    switch (amount>=100)
    {
    case 1:
        n100 = amount/100;
        amount=amount-(n100*100);
        break;
   
    }

    switch (amount>=20)
    {
    case 1:
        n20 = amount/20;
        amount=amount-(n20*20);
        break;
   
    }

    switch (amount>=10)
    {
    case 1:
        n10 = amount/10;
        amount=amount-(n10*10);
        break;
   
    }

    switch (amount>=1)
    {
    case 1:
        n1 = amount/1;
        amount=amount-(n1*1);
        break;
   
    }
    cout<<n500<<endl;
    cout<<n100<<endl;
    cout<<n20<<endl;
    cout<<n10<<endl;
    cout<<n1<<endl;
}