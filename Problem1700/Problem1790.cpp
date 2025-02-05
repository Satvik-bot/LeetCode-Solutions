// 1790. Check if One String Swap Can Make Strings Equal
class Solution {
public:
    // Complexity: O(N) + O(N)
    bool areAlmostEqual(string s1, string s2) {
        unordered_map<int, int> s_one_map;
        unordered_map<int, int> s_two_map;

        for(auto c: s1) s_one_map[c]++;
        for(auto c: s2) s_two_map[c]++;
        if(s_one_map!=s_two_map) return false;

        int i=0;
        int unmatched_chars=0;
        while(i<s1.length()){
            if(s1[i] != s2[i]){
                unmatched_chars+=1;
            }
            i++;
        }
        if (unmatched_chars < 3) return true;
        else return false;
    }
};