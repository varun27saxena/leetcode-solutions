class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i < j){
            while(i<j && !isVowel(s[i]))i++;
            while(i<j && !isVowel(s[j]))j--;
            swap(s[i],s[j]);
            i++,j--;
        }
        return s;
    }
};