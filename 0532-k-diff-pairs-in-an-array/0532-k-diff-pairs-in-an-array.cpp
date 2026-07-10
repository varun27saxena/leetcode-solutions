class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        int i = 0;
        int j = 1;
        while (i < j && j < nums.size()) {
            int diff = abs(nums[i] - nums[j]);
            if (diff == k) {
                cnt++;
                int left = nums[i];
                int right = nums[j];

                while (i < nums.size() && nums[i] == left)
                    i++;

                while (j < nums.size() && nums[j] == right)
                    j++;

            } else if (diff > k) {
                i++;
            } else {
                j++;
            }
            if(i==j)j++;
        }
        return cnt;
    }
};