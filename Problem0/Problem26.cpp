// Remove Duplicates from Sorted Array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
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