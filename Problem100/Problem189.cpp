// Rotate Arrary [Medium]
// Check if Array Is Sorted and Rotated
#include <iostream>
using namespace std;

class Solution {
public:
    // Solution 1 -> TC: O(N) SC: O(N)
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> new_nums(n, 0);
        for(int i=0; i<n; i++) {
            new_nums[(i + k) % n] = nums[i];
        }
        nums=new_nums;
    }

    // Solution 2 -> TC: O(N) SC: O(1)
    // Reverse the array with k intervals.
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n){
            k = k % n; // Handle cases where k > n
        }
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};