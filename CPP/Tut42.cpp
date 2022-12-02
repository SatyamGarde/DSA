// print reverse of intiger and also valid for minimum and maximum value (2^-31,2^31-1)


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x=123) {
         int ans = 0;
        while(x != 0)
        {
            if((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
            {
                return 0;
            }
           
            int digit = x % 10;
            ans = (ans *10) + digit;
            x= x / 10;
        }
        return ans;
    }
};