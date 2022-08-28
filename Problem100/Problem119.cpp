// Pascal's Triangle II
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<int> getRow(int rowIndex) {
    vector<vector<int>> ans;    
        for(int i=0; i<34; i++) {
            ans.push_back(vector<int>(i + 1, 1));
            
            for(int j=0; j<=i; j++) {
                if(i==j || j==0)
                    ans[i][j] = 1;
                else
                    ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        
        return ans[rowIndex];
    }
};

/*
vector<int> getRow(int rowIndex) {
       vector<int>res(rowIndex+1);
       res[0]=1;
        for(int i=0;i<=rowIndex;i++){
            for(int j=i;j>0;j--){
                res[j] = res[j] + res[j-1];
            }
        }
        return res;
    }
*/