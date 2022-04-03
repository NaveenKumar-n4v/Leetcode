class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]<nums[high]){
                //coz high can be the answer if we go mid-1 then we may loose mid
                high = mid;
            }
            else if(nums[mid]>nums[high]){
                low = mid+1;
            }
            else
                return nums[low];
            
        }
        cout<<nums[low]<<" "<<nums[high];
        return nums[low];
    }
};