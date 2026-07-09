class Solution {
	public:
	vector<int> factorial(int n) {
		vector<int> a;
		a.push_back(1);
		int i = 2;
		int carry = 0;
		while (i <= n)
			{
			for (int j = 0; j<a.size(); j++)
				{
				int prod = (i * a[j]) + carry;
				a[j] = prod % 10;
				carry = prod / 10;
			}
			
			while (carry)
				{
				a.push_back(carry % 10);
				carry /= 10;
			}
			i++;
		}
		
		reverse(a.begin(), a.end());
		return a;
		
	}
};
