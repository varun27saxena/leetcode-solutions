class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans = -1;
        while(s <= e){
            long long mid = (s+e)>>1;
            long long element = mid*mid;
            if(element == x){
                return mid;
            }
            else if(element < x){
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