// stack implementation using array
#include<bits/stdc++.h>
#include <stack>
using namespace std;

class stack1
{
    public:
    int *arr;
    int top;
    int size;

    stack1(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

void push(int element)
{
    if(size - top > 1)
    {
        top++;
        arr[top] = element;
    }
    else
    {
        cout<<"Stack is overflow "<<endl;
    }
}    

void pop()
{
    if(top > -1)
    {
        top--;
    }
    else
    {
        cout<<"stack is empty "<<endl;
    }
}

int peek()
{
    if(top >-1)
    {
        return arr[top];
    }
    else
    {
        cout<<"stack is empty "<<endl;
        return -1;
    }
}

bool isempty()
{
    if(top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
};


int main()
{
    stack1 st(5);
    st.push(7);
    st.push(10);
    st.push(18);
    st.push(25);
    st.push(2);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    // st.pop();
    cout<<st.peek()<<endl;
    // st.pop();
    // cout<<st.peek()<<endl;

    if(st.isempty())
    {
        cout<<"Given stack is empty "<<endl;
    }
    else
    {
        cout<<"given stack is not empty"<<endl;
    }
    
    return 0;
}