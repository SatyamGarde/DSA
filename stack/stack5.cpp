// Reverse string using stack (STL)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "SatyamGarde";

    stack <char> st;

    for(int i = 0; i< str.size(); i++)
    {
        char ch = str[i];
        st.push(ch);

    }

    string ans = " ";

    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    cout<<ans<<endl;
    
    return 0;
}