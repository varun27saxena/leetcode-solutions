class Solution {
public:
    string reorganizeString(string s) {
        int count[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
        }

        char most_freq_char;
        int max_freq = INT_MIN;
        for (int i = 0; i < 26; i++) {
            if (count[i] > max_freq) {
                max_freq = count[i];
                most_freq_char = i + 'a';
            }
        }

        int index = 0;
        while (max_freq > 0 && index < s.size()) {
            s[index] = most_freq_char;
            max_freq--;
            index += 2;
        }
        if (max_freq != 0) {
            return "";
        }

        count[most_freq_char - 'a'] = 0;

            for (int i = 0; i < 26; i++) {
            while (count[i] > 0) {
                index = index >= s.size() ? 1 : index;
                s[index] = i + 'a';
                index += 2;
                count[i]--;
            }
        }
        return s;
    }
};