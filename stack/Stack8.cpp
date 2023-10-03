// Sort Stack
#include<bits/stdc++.h>
using namespace std;
void insertSorted(stack<int> &stack, int n)
{
    // base case
    if(stack.empty() || stack.top()<n)
    {
        stack.push(n);
        return;
    }

    int num = stack.top();
    stack.pop();

    insertSorted(stack, n);
    stack.push(num);
}

void SortStack(stack<int> &stack)
{
    // base case
    if(stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    SortStack(stack);

    insertSorted(stack, num);

}

int main()
{
    stack <int> st;
    st.push(5);
    st.push(4);
    st.push(13);
    st.push(10);
    st.push(1);

    SortStack(st);
     while(!st.empty()) {
      cout << st.top() << " ";
      st.pop();
   }

   return 0;
}