class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num =0;
        for(auto i : nums){
            num = num ^ i;
        }
        return num;
        
    }
};