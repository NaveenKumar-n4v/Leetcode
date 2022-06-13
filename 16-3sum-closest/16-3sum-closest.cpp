class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        
        sort(nums.begin(),nums.end());
        // -4, -1, 1, 2
        
        int res = 0;
        int totSum = INT_MAX;
        
        for(int i = 0;i<nums.size()-2;i++){
            
            int low = i+1;
            int high = nums.size()-1;
            
            while(low < high){
                int sum = nums[i]+nums[low]+nums[high];

                if(sum > target){
                    high--;
                }
                else{
                    low++;
                }
                if(abs(target - sum) < totSum)
                {
                totSum = abs(target - sum);
                res = sum;
                }
            }
            
        }
        return res;
    }
};



