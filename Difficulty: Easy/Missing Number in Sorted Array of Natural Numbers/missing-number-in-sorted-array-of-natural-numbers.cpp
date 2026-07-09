class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int ans = -1;
        while(s <= e){
            int mid = (s+e)>>1;
            if(mid+1 == arr[mid]){
                // left side
                s =mid + 1;
            }
            else{
                ans = mid;
                e = mid-1;
            }
        }
        if(ans == -1) return arr.size()+1;
        return ans+1;
        
    }
};