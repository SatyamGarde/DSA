// celebrity problem                     
#include<bits/stdc++.h> 
using namespace std;
int findCelebrity(int arr[][3], int n)
{
    stack<int> st;
    for(int i =0; i< n; i++)
    {
        st.push(i);
    }
    while(st.size() >1)
    {
        int a = st.top();
        st.pop();
        int b  = st.top();
        st.pop();


        if(arr[a][b] ==1)
        {
            st.push(b);
        }
        else
        {
            st.push(a);
        }

    }

    int ans = st.top();
    int zeroCount = 0;
    int oneCount = 0;

    for(int i = 0; i <n ;i++)
    {
        if(arr[ans][i] == 0)
        {
            zeroCount++;
        }

        if(arr[i][ans] == 1)
        {
            oneCount++;
        }
    }

    if(zeroCount !=n)
    {
        return -1;
    }

    if(oneCount != n - 1)
    {
        return -1;
    }

    return ans;
}
int main()
{
    int arr[3][3] = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    cout<<findCelebrity(arr,3);


    return 0;
     
}