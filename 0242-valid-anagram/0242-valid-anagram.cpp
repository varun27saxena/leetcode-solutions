class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
        for(int i = 0;i<s.length();i++){
            mpp[s[i]]++;
        }

        for(int i = 0;i<t.length();i++){
            mpp[t[i]]--;
        }
        
        bool flag = true;
        for(auto i:mpp){
            if(i.second != 0)flag = false;
        }
        return flag;
    }
};