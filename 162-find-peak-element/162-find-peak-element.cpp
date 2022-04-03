class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        
        
        int n = arr.size();
        int low = 0;
        int high = n-1;
        
        while(low < high){
            int mid = low + (high - low)/2;
            // coz arr[mid] can be a peak coz arr[mid] is high
            if(arr[mid]>arr[mid +1]){
                high = mid;
            }
            // coz arr[mid] is lesser dhan mid + 1 arr[mid]cant be a peak 
            else if (arr[mid]<arr[mid+1]){
                low = mid +1;
            }
        }
        return low;
        
    }
};