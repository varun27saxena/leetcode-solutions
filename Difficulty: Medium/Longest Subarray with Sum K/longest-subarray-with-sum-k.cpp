class Solution {
	public:
	int longestSubarray(vector<int>& arr, int k) {
		int sum = 0;
		unordered_map<int, int>mpp;
		int len = 0;
		
		int i = 0;
		while (i<arr.size()) {
			sum += arr[i];
			if (sum == k) {
				len = max(len, i + 1);
			}
			if (mpp.find(sum - k) != mpp.end()) {
				len = max(len, i - mpp[sum - k]);
			}
			if (mpp.find(sum) == mpp.end()) {
				mpp[sum] = i;
			}
			i++;
		}
		return len;
	}
};
