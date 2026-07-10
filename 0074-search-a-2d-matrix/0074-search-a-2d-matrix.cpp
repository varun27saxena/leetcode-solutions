class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int total = m*n;
        int s = 0;
        int e = total-1;
        while(s<=e){
            int mid = (s+e)>>1;
            int element = matrix[mid/n][mid%n];
            if(element == target)return true;
            else if(element < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return false;
    }
};