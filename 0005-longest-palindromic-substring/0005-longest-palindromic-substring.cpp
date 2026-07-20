class Solution {
public:
    string expand(int i, int j, string s) {
        while (i >= 0 && j < s.size() && s[i] == s[j]) {
            i--, j++;
        }
        i++, j--;
        string ans = "";
        for (int k = i; k <= j; k++) {
            ans.push_back(s[k]);
        }
        return ans;
    }

    string longestPalindrome(string s) {
        string ans;
        for (int i = 0; i < s.length(); i++) {
            string temp1 = expand(i, i, s);
            string temp2 = expand(i, i + 1, s);
            if (temp1.length() > ans.length())
                ans = temp1;

            if (temp2.length() > ans.length())
                ans = temp2;
        }
        return ans;
    }
};