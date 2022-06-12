class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int sum = 0;
        int counter = 0;
        unordered_map<int,int>mpp;
        
        for(int i = 0;i<nums.size();i++){
            sum +=nums[i];
            if( sum == k){
                counter++;
            }
            if(mpp.find(sum-k) != mpp.end()){
                counter+=mpp[sum-k];
            }
            mpp[sum]++;
        }
        return counter;
        
    }
};