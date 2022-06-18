class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int left =  1;
        int right = 1;
        int n = nums.size();
        vector<int>temp(n,1);
        
        for(int i =0;i<nums.size();i++)
        {
            temp[i] *= left;
            left *= nums[i];
        }
        for(int i = nums.size()-1; i>=0 ;i--)
        {
            temp[i] *= right;
            right *= nums[i];
        }
        return temp;
    }
};