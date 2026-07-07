class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int s = 0;
        int e = nums.size()-1;
        while(i<=e){
            if(nums[i] == 2){
                swap(nums[i],nums[e]);
                e--;
            }
            else if(nums[i] == 0){
                swap(nums[i],nums[s]);
                i++,s++;
            }
            else{
                i++;
            }
        }
    }
};