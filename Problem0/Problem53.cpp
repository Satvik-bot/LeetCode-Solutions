// Maximum Subarray
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();

        int max_here = 0, max_sofar = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            max_here += nums[i];
            if (max_here < 0)
                max_here = 0;

            if (max_sofar < max_here)
                max_sofar = max_here;
        }

        return max_sofar;
    }
};