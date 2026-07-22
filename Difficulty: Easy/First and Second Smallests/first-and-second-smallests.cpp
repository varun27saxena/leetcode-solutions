class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int mini = INT_MAX;
        int secondMini = INT_MAX;
        for(int i = 0;i<arr.size();i++){
            if(arr[i] < mini){
                secondMini = mini;
                mini = arr[i];
            }
            else if(arr[i] < secondMini && mini != arr[i]){
                secondMini = arr[i];
            }
        }
        if(secondMini == INT_MAX)return {-1};
        return {mini,secondMini};
    }
};