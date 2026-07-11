// User function template in C++

class Solution {
  public:
    // Function to find minimum number of pages.
    bool isPossible(int n,int arr[],int m,int sol){
        int c = 1;
        int page_count = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] > sol){
                return false;
            }
            else if(page_count + arr[i] <= sol){
                page_count += arr[i];
            }
            else{
                page_count = arr[i];
                c++;
                if(c > m){
                    return false;
                }
            }
        }
        return true;
    }
    
    long long findPages(int n, int arr[], int m) {
        if(m > n){
            return -1;
        }
        long long s = 0;
        long long sum = 0;
        for(int i = 0;i<n;i++){
            sum += arr[i];
        }
        long long e = sum;
        long long ans = -1;
        while(s<=e){
            int mid = (s+e)>>1;
            if(isPossible(n,arr,m,mid)){
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
