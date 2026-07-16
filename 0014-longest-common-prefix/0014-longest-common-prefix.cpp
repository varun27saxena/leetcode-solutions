class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans = "";
        string firstWord = strs[0];
        string lastWord = strs[strs.size()-1];
        int i = 0;
        int j = 0;
        while(i<firstWord.size() && j<lastWord.size() && firstWord[i] == lastWord[j]){
            ans.push_back(firstWord[i]);
            i++,j++;
        }
        return ans;
    }
};