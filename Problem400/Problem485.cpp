// Max Consecutive Ones
#include <iostream>
using namespace std;

class Solution {
public:
    // O(N) + O(1)
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int n = nums.size();
        int curr=0;

        for (int i=0; i<n; i++) {
            if(nums[i]==1){
                curr++;
                if(curr>max){
                    max=curr;
                }
            }
            else{
                curr=0;
            }
        }
        return max;
    }
};