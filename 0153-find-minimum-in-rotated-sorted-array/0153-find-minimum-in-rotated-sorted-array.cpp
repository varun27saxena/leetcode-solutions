class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        if (nums[0] < nums[e])
            return nums[0];
        while (s <= e) {
            int mid = (s + e) >> 1;
            if (s == e)
                return nums[s];
            if (nums[0] > nums[mid]) {
                // left side
                e = mid;
            } else {
                s = mid + 1;
            }
        }

        return -1;
    }
};