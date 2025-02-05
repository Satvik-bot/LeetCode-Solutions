// Majority Element
#include <iostream>
using namespace std;


class Solution {
public:
    // O(N) + O(N)
    int majorityElement(vector<int>& nums) {
        int key_max, max_value;
        unordered_map<int, int> hash;

        for(auto x:nums)hash[x]++;

        for (const auto& pair : hash) {
            if(pair.second > max_value) {
                max_value = pair.second;
                key_max = pair.first;
            }
        }
        return key_max;
    }
};