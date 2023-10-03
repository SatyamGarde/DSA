// Remove middle element
#include<bits/stdc++.h>
using namespace std;
void deleteMiddle(stack<int> &st, int count, int N)
{    
    // base case
    if(count == N/2)
    {
        st.pop();
        return;
    }
    
    int num = st.top();
    st.pop();
    count++;
    deleteMiddle(st,count,N);

    st.push(num);

}

int main()
{
    stack <int> st;
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);

    int count = 0;
    deleteMiddle(st, count, st.size());
    while(!st.empty()) {
      cout << st.top() << " ";
      st.pop();
   }

}