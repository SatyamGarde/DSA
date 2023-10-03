// Given string is Redundant or Not
#include<bits/stdc++.h>
using namespace std;

bool Redundant(string &s)
{
   stack<char> st;

    for(int i = 0; i< s.length(); i++)
    {
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else if(ch == ')')
        {
            bool isRedundant = true;
            char top = st.top();
            st.pop();

            while(top != '(')
            {
                if(top == '+' || top == '-' || top == '*' || top == '/')
                {
                    isRedundant = false;
                }
                top = st.top();
                st.pop();
            }

            if(isRedundant == true)
            {
                return true;
            }
        }
    }

    return false;
}
int main()
{

string str ="((a+b))";


cout<<Redundant(str);


return 0;
}