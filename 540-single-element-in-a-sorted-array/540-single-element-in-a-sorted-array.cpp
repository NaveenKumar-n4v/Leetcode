class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        
        int low =0;
        int n = nums.size();
        // coz if single element in last index we need a index for low to occupy
        int high = n-2;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            // mid^1 
            // is mid is odd mid^1 will give the left even index 
            // if mid id even mid^1 will give the right odd index
             if(nums[mid] == nums[mid^1]){
                 low = mid+1;
             }
            else
                high = mid-1;
        }
        // coz always low will cross the boundary
        return nums[low];
        
    }
};