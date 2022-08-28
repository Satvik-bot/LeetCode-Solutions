//Length of Last Word
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int lengthOfLastWord(string s) {
        int n=s.length(), c=0;
        
        for(int i=n-1; i>=0; i--){
            if(s[i] == ' ') continue;
            c++;
            if(i == 0 || s[i-1] == ' ') break;
        }
        
        return c;
    }
};


/*
This did not work.
Although this is completely unnecessary and I do not expect myself to correct it in future, 

Error: AddressSanitizer: stack-buffer-overflow 

    int lengthOfLastWord(string s) {
        int n=s.length(), count=0; 
        vector<pair<int, vector<char>>> v;
        
        for(int i=0; i<n; i++) {
            int j=1;
            if(s[i]!=' '){
                vector<char> c;
                while(s[i]!=' '){
                    c.push_back(s[i]);
                    i++;
                }
                v.push_back({j,c});
                j++;
            }
        }
        
        int n1 = v.size();
        vector<char> ans = v[n1-1].second;
        return ans.size();
    }
*/