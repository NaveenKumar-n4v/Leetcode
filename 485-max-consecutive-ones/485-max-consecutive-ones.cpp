class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int right =0;
        int n = nums.size();
        int sum =0;
        int maxi = sum;
        while(right < nums.size()){
            if(nums[right]==0){
                sum =0;
            }
            else{
                sum += nums[right];
            }
            maxi = max(sum,maxi);
            right++;
        }
        return maxi;
        
        
    }
};