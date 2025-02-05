// Missing Number
#include <iostream>
using namespace std;

class Solution {
public:
    // TC: O(NlogN) - Used sorting
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int missing;

        if(nums[n-1]!=n) return n;

        for(int i=0; i<n; i++) {
            if(nums[i]!=i){
                missing=i;
                break;
            }
        }

        return missing;
    }

    // Optimal Approach: Sum of all numbers -> n(n+1)/2
    int missingNumber(vector<int>& nums) {
        // [3, 0, 1]
        // [3, 0, 1, 2] = range[0, 3] = sum(0+1+2+3=6)
        int n = nums.size();
        int idealSum = n*(n+1)/2;
        int sum;
        for(auto x:nums){
            sum+=x;
        }
        return idealSum-sum;
    }
};
