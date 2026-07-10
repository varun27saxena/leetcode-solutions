class Solution {
	public:
	int sqrt(int n) {
		int s = 0;
		int e = n;
		int ans = -1;
		while (s <= e) {
			long long mid = (s + e)>> 1;
			long long element = mid*mid;
			if (element == n)return mid;
			else if (element < n) {
				ans = mid;
				s = mid + 1;
			}
			else {
				e = mid - 1;
			}
		}
		return ans;
	}
	
	double squareRoot(int n, int p) {
		double sqrtAns = sqrt(n);
		double step = 0.1;
		for(int i = 0;i<p;i++){
		    for(double j = sqrtAns;j*j<=n;j+=step){
		        sqrtAns = j;
		    }
		        step /= 10;
		}
		return sqrtAns;
		
	}
};
