class Solution {
public:
    int oddSubstr(int i,int j,string s){
        int cnt = 0;
        while(i >= 0 && j<s.length() && s[i] == s[j]){
            cnt++,j++,i--;
        }
        return cnt;
    }

    int evenSubstr(int i,int j,string s){
        int cnt = 0;
        while(i >= 0 && j<s.length() && s[i] == s[j]){
            cnt++,j++,i--;
        }
        return cnt;
    }

    int countSubstrings(string s) {
        int count = 0;
        for(int k = 0;k<s.length();k++){
            // odd
            count += oddSubstr(k,k,s);
            // even
            count += evenSubstr(k,k+1,s);
        }
        return count;
    }
};