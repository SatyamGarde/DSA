// prev smaller element
#include<bits/stdc++.h>
using namespace std;
vector<int> prevSmaller(vector<int> arr, int n)
{
    stack<int> st;
    st.push(-1);

    vector<int> ans(n);

    for(int i = 0; i < n; i++)
    {
        int curr = arr[i];

        while (st.top() >= curr)
        {
            st.pop();
        }

        if(st.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top();
        }
        st.push(curr);
        
    }
    return ans;
}
int main()
{
    vector<int> arr ={1,3,2,4};
    vector<int> res = prevSmaller(arr,4);

    for (int i = 0; i < 4; i++)
    {
        cout<<res[i]<<" ";
    }
    

}