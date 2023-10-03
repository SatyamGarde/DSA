// Largest rectangle in histogram
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

        while (!st.empty() && arr[st.top()] >= curr)
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
        st.push(i);
        
    }
    return ans;
}

vector<int> nextSmaller(vector<int> arr, int n)
{
    stack<int> st;
    st.push(-1);

    vector<int> ans(n);

    for(int i = n-1; i >= 0; i--)
    {
        int curr = arr[i];

        while (!st.empty() && arr[st.top()] >= curr)
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
        st.push(i);
        
    }
    return ans;
}

int largestRectangle(vector<int> heights)
{
    int n = heights.size();
    vector<int> prev(n);
    vector<int> next(n);


    prev = prevSmaller(heights, n);
    next = nextSmaller(heights, n);

    int area = INT_MIN;
    for(int i = 0; i< n; i++)
    {
        int length = heights[i];
        if(next[i] ==-1)
        {
            next[i] = n;
        }
        int width = next[i] - prev[i] -1;

        int newArea = length * width;

        area = max(area,newArea);
    }
    return area;

}
int main()
{
    vector<int> arr =  {2,1,5,6,2,3};
    int res = largestRectangle(arr);
    cout<<res;
}