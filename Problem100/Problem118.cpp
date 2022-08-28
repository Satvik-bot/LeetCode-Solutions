// Pascal's Triangle
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
vector<vector<int>> generate(int numRows) {
        int n = numRows-1;
        vector<vector<int>> ans;
        
        for(int i=0; i<=n; i++) {
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
        
        return ans;
    }

};