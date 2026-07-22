class Solution {
public:
    static bool comp(string a, string b) {
        string s1 = a + b;
        string s2 = b + a;
        return s1 > s2;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> str;
        for (auto i : nums) {
            str.push_back(to_string(i));
        }

        sort(str.begin(), str.end(), comp);
        if (str[0] == "0")
            return "0";
        string ans = "";
        for (int i = 0; i < str.size(); i++) {
            ans += str[i];
        }
        return ans;
    }
};