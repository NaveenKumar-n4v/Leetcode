class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        if(arr.size()<3)return -1;
        int n = arr.size();
        int low = 1;
        int high = n-2;
        
        while(low <= high){
            int mid = low+(high-low)/2;
            if (arr[mid] < arr[mid+1]){
                low = mid+1;
            }
            else
                high = mid-1;
        }
        return low;
        
        
    }
};