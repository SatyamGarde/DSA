// stack basics
// follows "LIFO"
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Stack creation
    stack<int> s;
    // push operation
    s.push(7);
    s.push(10);
    s.push(18);
    
    // pop operation 
    s.pop();
   
    // finding top element of stack
    cout<<"Top of the stack element is "<<s.top()<<endl;

    // To check stack is empty or not

    if(s.empty())
    {
        cout<<"Stack is empty "<<endl;
    }
    else
    {
        cout<<"stack is not empty "<<endl;
    }


    return 0;
}