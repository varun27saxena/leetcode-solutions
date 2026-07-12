class Solution {
  public:
    int lengthString(string &s) {
        int i = 0;
        while(s[i] != '\0'){
            i++;
        }
        return i;
        
    }
};