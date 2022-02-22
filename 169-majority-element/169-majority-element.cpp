class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;    
        int ans=0;
        for(auto i : nums)freq[i]++;
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[i]]>nums.size()/2){
                ans = nums[i];
                break;
            }
        }
        return ans;
        
    }
};