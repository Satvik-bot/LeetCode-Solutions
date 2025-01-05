// Check if Array Is Sorted and Rotated
#include <iostream>
using namespace std;

class Solution {
public:
    // 1st solution
    // Complexity: O(N^2)
    bool helper(vector<int>& nums) {
     for(int i=1; i<nums.size(); i++) {
            if(nums[i] < nums[i-1]) return false;
        }
        return true;
    }

    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> B(n, 0);

        for(int i=0; i<n; i++) {
            if(helper(nums)) return true;
            B[i] = nums[(i+1)%n];
            if (helper(B)) return true;
        }
        return false;
    }

    // 2nd Solution (OPTIMAL)
    // Complexity: O(N)
    bool check_optimal(vector<int>& nums) {
        int drops = 0;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i-1] > nums[i]) {
                drops++;
                cout <<drops <<endl;
            }
        }

        if (nums.back() > nums[0]) drops++;
        if (drops>1) return false;
        return true;
    }

};