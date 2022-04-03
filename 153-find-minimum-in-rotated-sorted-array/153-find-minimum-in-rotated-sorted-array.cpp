class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<high){
            int mid = low + (high - low)/2;
            if(nums[mid]<nums[high]){
                //coz high can be the answer if we go mid-1 then we may loose mid
                high = mid;
            }
            else{
                // No need to check low coz smaller element lies to right of mid 
                // So low = m+1;
                low = mid+1;
            }
            // else
            //     //if single element its the answer if you dont use this code will overflow
            //     return nums[high];
            
        }
        cout<<nums[low]<<" "<<nums[high];
        return nums[low];
    }
};