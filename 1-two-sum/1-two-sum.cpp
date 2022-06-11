class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<int>v;
        unordered_map<int,int>umpp;
        for(int i = 0;i<nums.size();i++){
            
            if(umpp.find(target-nums[i]) != umpp.end()){
                v.push_back(umpp[target-nums[i]]);
                v.push_back(i);
        }
            umpp[nums[i]]=i;
        }
        return v;
    }
};