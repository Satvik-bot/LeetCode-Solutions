//Move Zeroes
#include <iostream>
using namespace std;

class Solution {
public:
    // O(N^2)
    void moveZeroes(vector<int>& nums) {
        vector<int> copy;
        reverse(nums.begin(), nums.end());
        int n=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]!=0) {
                copy.insert(copy.begin(), nums[i]);
            }
            else{
                n++;
            }
        }

        while(n--){
            copy.push_back(0);
        }
        nums=copy;
      }

    // O(N)
     void moveZeroes(vector<int>& nums) {
        int i=0,j=1;
        int n = nums.size();

        while(i<n && j<n) {
            if(nums[i] == 0) {
                if(nums[j]!=0){
                    swap(nums[i], nums[j]);
                    i++;j++;
                }
                else{
                    j++;
                }
            }
            else{
                i++;
                j++;
            }
        }
    }
};