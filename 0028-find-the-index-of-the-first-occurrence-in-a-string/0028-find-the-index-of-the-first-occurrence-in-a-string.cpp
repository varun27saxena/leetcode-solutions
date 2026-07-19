class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        int n = haystack.size();
        int m = needle.size();
        while(i<=n-m){
            int j = 0;
            while(j<needle.size()){
                if(needle[j] != haystack[i+j]){
                    break;
                }
                if(j == m-1){
                    return i;
                }
                j++;
            }
            i++;
        }
        return -1;
    }
};