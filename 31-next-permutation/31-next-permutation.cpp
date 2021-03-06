class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        
        int n = nums.size();
        int val =-1;
        for(int i= n-1;i>0;i--){
            if(nums[i] > nums[i-1]){
                val = i - 1;
                break;
            }
        }
        
        if(val < 0){
            reverse(nums.begin(), nums.end());
            return;
        }
        int i=0;
        for(i = n-1; i>val; i--){
            if(nums[i] > nums[val]){
                break;
            }
        }
        swap(nums[i], nums[val]);
        reverse(nums.begin()+val+1, nums.end());
    }
};