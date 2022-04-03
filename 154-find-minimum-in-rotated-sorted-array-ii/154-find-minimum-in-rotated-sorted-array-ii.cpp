class Solution {
public:
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
            else
                high--;
        }
        cout<<arr[low]<<" "<<arr[high];
        return arr[low];
    }
};