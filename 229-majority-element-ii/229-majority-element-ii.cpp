class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        map<int, int>mpp;
        for(auto i : nums)mpp[i]++;
        vector<int>ans;
        n = n/3;
        for(auto i : mpp){
            if(i.second > n)ans.push_back(i.first);
        }
        return ans;
    
    }
};