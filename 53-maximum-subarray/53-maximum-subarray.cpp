class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0;
        int maxi = INT_MIN;
        for(auto i : nums){
            sum +=i;
            if(sum >maxi)maxi = sum;
            if(sum < 0 )sum =0;
        }
        return maxi;
    }
};