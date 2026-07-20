class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        int prev = 0;
        int i = 1;
        int cnt = 1;
        while (i < chars.size()) {
            if (chars[prev] == chars[i])
                cnt++;
            else {
                chars[index++] = chars[prev];
                if (cnt > 1) {
                    int start = index;
                    while (cnt) {
                        chars[index++] = cnt % 10 + '0';
                        cnt /= 10;
                    }
                    reverse(chars.begin()+start,chars.begin()+index);
                }
                cnt = 1;
                prev = i;
            }
            i++;
        }
        chars[index++] = chars[prev];
        if (cnt > 1) {
            int start = index;
            while (cnt) {
                chars[index++] = cnt % 10 + '0';
                cnt /= 10;
            }
            reverse(chars.begin()+start,chars.begin()+index);
        }
        return index;
    }
};