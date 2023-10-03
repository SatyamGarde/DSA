#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Stack0
{
    public:

    Node* top;
    int StackSize;

    // public:
    Stack0()
    {
        this->StackSize = 0;
        top = NULL;
        
    }

    void push(int element)
    {
        Node* temp = new Node(element);
        temp->next = top;
        top = temp;
        StackSize++;
    }

    void pop()
    {
       if(top == NULL)
       {
            cout<<"No element to remove "<<endl;
       }
       else
       {
        Node* temp = top;
        top = temp->next;
        temp->next = NULL;
        delete temp;

        StackSize--;
       }
    }

    void peak()
    {
        if(top == NULL)
        {
            cout<<"No Peak element "<<endl;
        }
        else
        {
            cout<<"peak element is "<<top->data<<endl;
        }
    }

    void Size()
    {
        cout<<"size of Stack is "<<StackSize<<endl;
    }

    bool isEmpty()
    {  
        if(top == NULL)
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
    Stack0 st;
    st.push(7);
    st.push(10);
    st.push(18);
    st.peak();
    st.pop();
    st.peak();
    st.Size();

    if(st.isEmpty())
    {
        cout<<"given stack is empty "<<endl;
    }
    else
    {
        cout<<"Stack is not empty ";
    }
}