

class Solution {
  public:
    string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        string ans="";
        int carry = 0;
        reverse(arr1.begin(),arr1.end());
        reverse(arr2.begin(),arr2.end());
        int i = 0;
        int j = 0;
        while(i<arr1.size() && j<arr2.size()){
            int sum = arr1[i]+arr2[j]+carry;
            int digit = sum%10;
            ans.push_back(digit+'0');
            carry = sum/10;
            i++,j++;
        }
        while(i<arr1.size()){
            int sum = arr1[i]+carry;
            int digit = sum%10;
            ans.push_back(digit+'0');
            carry = sum/10;
            i++;
        }
        while(j<arr2.size()){
            int sum = arr2[j]+carry;
            int digit = sum%10;
            ans.push_back(digit+'0');
            carry = sum/10;
            j++;
        }
        if(carry){
            ans.push_back((carry%10)+'0');
            carry /= 10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};