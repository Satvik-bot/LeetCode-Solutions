// Single Number
#include <iostream>
using namespace std;


class Solution {
public:
    // O(N) + O(N) -> Inefficient Solution using extra space
    int singleNumber(vector<int>& nums) {
        int n=nums.size(), ans;
        unordered_map<int, int> hash;

        for(auto x:nums) hash[x]++;
        for(auto& [key, value] : hash) {
            if(value == 1) {
                ans = key;
                break;
            }
        }
        return ans;
    }

    // O(N) + O(1) -> Efficient Solution using XOR
    // XOR Basics:
    // 1. x ^ x = 0 (A number XORed with itself is 0)
    // 2. x ^ 0 = x (A number XORed with 0 remains unchanged)
    // Application here: All duplicate numbers cancel out, leaving the unique number.
    int singleNumber(vector<int>& nums) {
        int n=nums.size(), sum=0;
        for(int i=0; i<n; i++) {
            sum = sum^nums[i];
        }
        return sum;
    }
};