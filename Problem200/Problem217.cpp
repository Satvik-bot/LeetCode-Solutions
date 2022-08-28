//217. Contains Duplicate
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        bool flag = false;
        
        for(int i=0; i<n; i++){
            m[nums[i]]++;
            if(m[nums[i]] > 1)
                flag = true;
        }

        return flag;
    }
};