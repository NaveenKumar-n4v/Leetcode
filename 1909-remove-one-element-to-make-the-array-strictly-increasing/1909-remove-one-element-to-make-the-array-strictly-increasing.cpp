class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int counter =0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1] >= nums[i]){
                if(i >= 2 && nums[i-2] >= nums[i]){
                    nums[i] = nums[i-1];
                }
                counter++;
            }
            
                
        }
        if(counter == 0 || counter == 1 )return true;
        return false;
        
    }
};