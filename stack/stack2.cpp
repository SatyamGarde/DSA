// Stack implementation using array
#include<bits/stdc++.h>
using namespace std;
class Stack0
{
    public:
    int * arr;
    int top;
    int size;

    // constructor
    Stack0(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
        
    }

    void push(int num)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = num;
            cout<<arr[top]<<endl;
        }
        else
        {
            cout<<"stack is overflow "<<endl;
        }
    }

    void pop()
    {
        if(top >=0)
        {
            top--;
           
        }
        else
        {
            cout<<"stack is empty "<<endl;
        }
    }

    void peek()
    {
        if(top >=0)
        {
            cout<<"top element is "<<arr[top]<<endl;  
        }
        else
        {
            cout<<"stack is empty "<<endl;
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
    Stack0 st(5);
    st.push(12);
    st.push(13);
    st.push(11);
    st.push(10);
    st.push(13);
    
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    st.peek();

    if(st.isempty())
    {
        cout<<"array is empty "<<endl;
    }
    else
    {
        cout<<"array is not empty "<<endl;
    }


    return 0;
}