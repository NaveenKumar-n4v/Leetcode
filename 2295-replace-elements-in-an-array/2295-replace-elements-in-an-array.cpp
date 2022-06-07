class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<int,int>mpp;
        int val =0;
        for(auto i : nums){
            mpp[i]=val;
            val++;
        }
        for(auto i : operations){
            nums[mpp[i[0]]]=i[1];
            mpp[i[1]]=mpp[i[0]];
        }
        return nums;
        
    }
};