class Solution {
  public:
    bool isPossible(vector<int>&arr,int k,int sol){
        int time_count = 0;
        int cnt = 1;
        for(int i = 0;i<arr.size();i++){
            if(arr[i] > sol)return false;
            else if(time_count + arr[i] <= sol){
                time_count += arr[i];
            }
            else{
                time_count = arr[i];
                cnt++;
                if(cnt > k){
                    return false;
                }
            }
        }
        return true;
    }
    
    int minTime(vector<int>& arr, int k) {
        if(k > arr.size())return -1;
        int s = 0;
        int e = accumulate(arr.begin(),arr.end(),0);
        int ans = -1;
        while(s<=e){
            int mid = (s+e)>>1;
            if(isPossible(arr,k,mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};