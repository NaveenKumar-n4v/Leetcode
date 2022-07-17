class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int k = nums.size()/3;
        unordered_map<int, int>umpp;
        for(auto i : nums)umpp[i]++;
        vector<int>ans;
        for(auto i : umpp){
            if(i.second > k)ans.push_back(i.first);
        }
        return ans;
    
    }
};