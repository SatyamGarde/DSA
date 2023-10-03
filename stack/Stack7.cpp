// Valid paranthesis
#include<bits/stdc++.h>
using namespace std;

bool valid(string str)
{
    stack <char> st;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if(ch == '{' || ch=='[' || ch=='(')
        {
            st.push(ch);
        }
        else
        {
            if(st.empty())
                {
                    return false;
                }
                char first = st.top();

                if((ch == '}' && first == '{') || 
                   (ch == ']' && first == '[') || 
                   (ch == ')' && first == '('))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
     
        }
    }

    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
    } 
    
}                   

int main()
{
    string str = "{[())]}";
    cout<<valid(str);

    return 0;
}