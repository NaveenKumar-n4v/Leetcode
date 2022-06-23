class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int,int>mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.second > 1)return true;
            
        }
        return false;
        
    }
};