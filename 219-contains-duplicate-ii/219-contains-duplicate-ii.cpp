class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            
            if(mpp.count(nums[i])){
                
                int val = abs(mpp[nums[i]] - i);
                if(val <= k)return true;
            }
            mpp[nums[i]] = i;
        }
        return false;
        
    }
};