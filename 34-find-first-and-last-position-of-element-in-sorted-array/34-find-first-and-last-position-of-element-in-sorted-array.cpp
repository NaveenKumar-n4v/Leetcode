class Solution {
    
private:
    int firstOcc(vector<int>&arr, int x){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid] == x){
                ans = mid;
                high = mid-1;
                
            }
            else if(arr[mid]>x){
                high = mid-1;
            }
            else
                low = mid +1;
        }
        return ans;
    }
    int LastOcc(vector<int>&arr,int x){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid] == x){
                ans = mid;
                low = mid+1;
                
            }
            else if(arr[mid]>x){
                high = mid-1;
            }
            else
                low = mid +1;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        // cout<<firstOcc(nums,target)<<endl;
        // cout<<LastOcc(nums,target)<<endl;
        return {firstOcc(nums,target),LastOcc(nums,target)};
    }
};