// Remove Duplicates from Sorted Array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 5th Jan, 2025. Clean stuff 🗿
    // O(N) - Two Pointer technique
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 1;
        int i=0,j=1;

        while(i<n && j<n) {
            if((nums[i]!=nums[j]) && (nums[i]<nums[j])) {
                i++;
                swap(nums[i],nums[j]);
                j=i+1;
            }
            else{
                j++;
            }
        }
        return i+1;
    }


    // Committed on Jan 26, 2024. Such shit code omfg.
    int removeDuplicates(vector<int>& nums) {
            int i=0;
            int j=1;
            int n=nums.size();

            if(n==1) return 1;

            bool flag = false; // turn it on when encountering identical values. Turn it off after spotting new value.
            while(i < n) {
                int initialNumber = nums[i];
                if(flag==true) {
                    j++;
                }

                if(initialNumber != nums[j] && flag==true) {
                    vector<int>::iterator iterator1, iterator2;
                    iterator1= nums.begin()+i, iterator2= nums.begin()+j;
                    nums.erase(iterator1, iterator2);
                    flag=false;
                } else if(initialNumber != nums[j]) {
                    i++;
                    j++;
                } else {
                    j++;
                    flag=true;
                }
            }
            return nums.size();
        }
};