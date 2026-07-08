class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        unordered_map<int,int>mpp;
        for(int i = 0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(int i = 0;i<arr.size();i++){
            if(mpp[arr[i]] >= 2)return i+1;
        }
        return -1;
    }
};