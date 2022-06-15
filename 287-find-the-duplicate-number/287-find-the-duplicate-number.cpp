class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            int idx = abs(nums[i])-1;
            nums[idx]= -1*nums[idx];
            if(nums[idx]>0){
                ans.push_back(idx+1);
            }
        }
        
        for(auto i : nums)cout<<i<<" ";
        cout<<endl;
        return ans[0];
    }
};