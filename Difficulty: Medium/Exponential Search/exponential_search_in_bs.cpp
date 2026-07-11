#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int binarySearch(vector<int>&arr,int s,int e,int target){
    while(s<=e){
        int mid = (s+e)>>1;
        if(arr[mid] == target)return mid;
        else if(arr[mid] > target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int expSearch(vector<int> &arr, int target)
{
    int n = arr.size()-1;
    if (arr[0] == target)
        return 0;
    int i = 1;
    while (i < arr.size() && arr[i] <= target)
    {
        i = i * 2;
    }
    return binarySearch(arr, i / 2, min(i, n - 1), target);
}

int main()
{
    vector<int>a = {3,4,5,6,11,13,14,15,56,70};
    int target = 13;
    cout<<expSearch(a,13)<<endl;
    return 0;
}
