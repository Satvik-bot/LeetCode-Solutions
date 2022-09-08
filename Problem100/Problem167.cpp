  vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size(), i = 0, j=n-1;

        while(i<=j) {
            int curr = numbers[i] + numbers[j];
            
            if(curr == target) {
                i+=1;
                j+=1;
                break;
            }
            
            else if(curr > target) {
                j--;
            }
            else {
                i++;
            }
        }
        return {i,j};
    }
