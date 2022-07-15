class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int totMaxi = nums[0];
        int left = totMaxi;
        int right = totMaxi;
        for(int i=1;i<nums.size();i++){
            
        if(nums[i]<0){
            swap(right,left);
        }    
        left = min(nums[i], nums[i]*left);
        right = max(nums[i], nums[i]*right);
            
        totMaxi = max(right, totMaxi);    
        }
        
        return totMaxi;
        
    }
};