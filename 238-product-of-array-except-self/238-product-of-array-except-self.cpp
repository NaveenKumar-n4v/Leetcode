class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int flag = 1;
        int n = nums.size();
        vector<int>temp(n,1);
        
        for(int i =0;i<nums.size();i++)
        {
            temp[i] *= flag;
            flag *= nums[i];
        }
        flag = 1;
        for(int i = nums.size()-1; i>=0 ;i--)
        {
            temp[i] *= flag;
            flag *= nums[i];
        }
        return temp;
    }
};