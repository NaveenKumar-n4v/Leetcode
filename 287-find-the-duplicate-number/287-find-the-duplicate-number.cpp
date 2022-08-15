
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        //very easy example 1 3 4 2 2 
        
        for(int i =0; i<nums.size();i++){
            int val = abs(nums[i])-1;
            nums[val] = -1 * nums[val];
            
            if(nums[val] > 0){
                return val+1;
            }
        }
        
        return 0;
    }
};