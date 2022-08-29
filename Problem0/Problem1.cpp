// Two Sum
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // BruteForce
    vector<int> twoSum_BruteForce(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<int> ans(2, 0);

        for (int i = 0; i < n; i++)
        {
            int f = nums[i];
            for (int j = i + 1; j < n; j++)
            {
                int sum = f + nums[j];
                if (sum == target)
                {
                    ans[0] = i;
                    ans[1] = j;
                    break;
                }
            }
        }
        return ans;
    }

    // Optimized
    vector<int> twoSum_Optimized(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<int> ans(2, 0);
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int f = nums[i];
            int rem = target - f;

            if (m.find(rem) != m.end())
            {
                ans[0] = i;
                ans[1] = m[rem];
                break;
            }
            m[nums[i]] = i;
        }

        return ans;
    }
};