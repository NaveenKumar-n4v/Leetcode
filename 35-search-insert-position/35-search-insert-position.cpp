class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int val = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(nums[val]==target){
            return val;
        }
        else
            return val;
    }
};