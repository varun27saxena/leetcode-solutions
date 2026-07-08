class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        vector<int>ans;
        set<int>st;
        int i= 0;
        int j = 0;
        int k = 0;
        while(i < a.size() && j < b.size() && k < c.size()){
            if(a[i] == b[j] && b[j] == c[k]){
                st.insert(a[i]);
                i++,j++,k++;
            }
            
            else if(a[i] < b[j]){
                i++;
            }
            else if(b[j] < c[k]){
                j++;
            }
            else{
                k++;
            }
            
            
            
        }
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
    }
};