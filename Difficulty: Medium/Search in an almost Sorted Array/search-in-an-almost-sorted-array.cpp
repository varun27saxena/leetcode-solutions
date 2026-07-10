class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        int s = 0;
        int e = arr.size()-1;
       
        while(s<=e){
            int mid = (s+e)>>1;
            if(arr[mid] == target)return mid;
            if(mid-1 >= s && arr[mid-1] == target)return mid-1;
            if(mid+1 <= e && arr[mid+1] == target)return mid+1;
            if(arr[mid] > target){
                e = mid-2;
            }
            else{
                s = mid+2;
            }
            
        }
        return -1;
        
    }
};