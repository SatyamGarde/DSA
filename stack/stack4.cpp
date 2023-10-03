#include<bits/stdc++.h>
using namespace std;
class Stack0
{
    public:
    int *arr;
    int top ;
    int size;

    Stack0(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size-top >1)
        {
            top++;
            arr[top] =element;
        }
        else
        {
            cout<<"Stack overflow "<<endl;
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
            cout<<" No elements in stack "<<endl;
        }
    }

    void peak()
    {
        if(top >-1)
        {
            cout<<"top of the stack is "<<arr[top]<<endl;
        }
        else
        {
            cout<<"no element"<<endl;
        }
    }

    bool isEmpty()
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
    Stack0 st(5);
    st.push(7);
    st.peak();
    st.push(10);
    st.peak();
    st.push(12);
    st.peak();
    st.push(18);
    st.peak();
    st.push(5);
    st.peak();
    
    st.pop();
    st.peak();
    st.pop();
    st.peak();
    st.pop();
    st.peak();
    st.pop();
    st.peak();

    if(st.isEmpty())
    {
        cout<<"Stack is empty "<<endl;
    }
    else
    {
        cout<<"Stack is not empty "<<endl;
    }
  
}