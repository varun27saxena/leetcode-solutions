class Solution {
  public:
    bool isPossible(vector<int>&arr,int k,int sol){
        int pos = arr[0];
        int cnt = 1;
        for(int i = 1;i<arr.size();i++){
            if(arr[i]-pos >= sol){
                pos = arr[i];
                cnt++;
                if(cnt == k)return true;
            }
        }
        return false;
    }
    
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int s = 0;
        int e = *max_element(arr.begin(),arr.end()) - (*min_element(arr.begin(),arr.end()));
        
        int ans = -1;
        while(s <= e){
            int mid = (s+e)>>1;
            if(isPossible(arr,k,mid)){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
        
    }
};