class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i = 0;
        int j = arr.size()-1;
        while(j-i+1 > k){
            if(abs(arr[i]-x) > abs(arr[j]-x)){
                i++;
            }
            else{
                j--;
            }
        }
        vector<int>a;
        for(int k = i;k<=j;k++){
            a.push_back(arr[k]);
        }
        return a;
    }
};
