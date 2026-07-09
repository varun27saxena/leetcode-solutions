class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        while(s<=e){
            int mid = (s+e)>>1;
            if(s==e)return s;
            if(mid+1 <=e && arr[mid] > arr[mid+1]){
                e = mid;
            }
            else{
                s = mid+1;
            }
        }
        return -1;
    }
};