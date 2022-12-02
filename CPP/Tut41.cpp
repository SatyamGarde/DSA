// Leetcode Question

/*
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).


Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.
*/
#include<iostream>
using namespace std;
class Solution
{
public:
    int hammingWeight(int n = 00000000000000000000000000001011)
    {
        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }

        return count;
    }
};