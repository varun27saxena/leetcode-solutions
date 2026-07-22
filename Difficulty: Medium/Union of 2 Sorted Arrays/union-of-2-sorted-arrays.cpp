class Solution {
	public:
	vector<int> findUnion(vector<int> &a, vector<int> &b) {
		vector<int>unionArr;
		int i = 0;
		int j = 0;
		while (i < a.size() && j < b.size()) {
			
			if (a[i] < b[j]) {
				if (unionArr.empty() || unionArr.back() != a[i]) {
					unionArr.push_back(a[i]);
					i++;
					
				}
				else
			    	i++;
			}
			else if (a[i] > b[j]) {
				if (unionArr.empty() || unionArr.back() != b[j]) {
					unionArr.push_back(b[j]);
					j++; }
					else
					    j++;
				}
				else {
					if (unionArr.empty() || unionArr.back() != a[i]) {
						unionArr.push_back(a[i]);
						i++;
						
					}
					else
				    	i++, j++;
				}
			}
			while (i<a.size()) {
				if (unionArr.empty() || unionArr.back() != a[i]) {
					unionArr.push_back(a[i]);
					i++;
				}
				else
			    	i++;
			}
			while (j<b.size()) {
				if (unionArr.empty() || unionArr.back() != b[j]) {
					unionArr.push_back(b[j]);
					j++;
				}
				else
			    	j++;
			}
			
			return unionArr;
		}
	};
