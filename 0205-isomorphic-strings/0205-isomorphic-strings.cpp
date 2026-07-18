class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        bool is_mapped[256] = {false};
        int i = 0;
        while (i < s.length()) {
            if (hash[s[i]] == 0 && is_mapped[t[i]] == false) {
                hash[s[i]] = t[i];
                is_mapped[t[i]] = true;
            }
            i++;
        }
        
        for(int i = 0;i<s.length();i++){
            if(hash[s[i]] != t[i]){
                return false;
            }
        }
        return true;
    }
};