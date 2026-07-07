class Solution {
public:
    int reverse(int x) {
        int n = x;
        int ans = 0;
        while(n){
            int lastDigit = n%10;
            if(ans < INT_MIN/10 || ans > INT_MAX/10)return 0;
            ans = ans*10+lastDigit;
            n /= 10;            
        }
        return ans;
    }
};