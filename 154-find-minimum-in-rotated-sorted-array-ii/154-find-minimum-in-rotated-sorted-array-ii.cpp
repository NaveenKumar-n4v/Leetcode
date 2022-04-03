class Solution {
public:
    
    
    /*
        Worst Case O(N) 111111
        Average Case O(LogN)
    */
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low < high){
            int mid = low + (high - low)/2;
            if(arr[mid]<arr[high]){
                high = mid;
            }
            else if(arr[mid]>arr[high]){
                low = mid +1;
            }
            // Edge case - when mid and high are equal just reduce high--;
            else
                high--;
        }
        cout<<arr[low]<<" "<<arr[high];
        return arr[low];
    }
};