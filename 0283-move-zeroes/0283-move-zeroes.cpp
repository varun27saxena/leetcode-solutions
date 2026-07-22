class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int s = 0;
        while(i<nums.size()){
            if(nums[i] != 0){
                swap(nums[s],nums[i]);
                s++;
            }
            i++;
        }
        
    }
};