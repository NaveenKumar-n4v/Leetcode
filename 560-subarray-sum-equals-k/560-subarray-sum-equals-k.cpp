class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int sum= 0;
        int cnt =0;
        unordered_map<int,int>mpp;
        for(int i =0;i<nums.size();i++){
            sum +=nums[i];
            if(sum == k)cnt++;
            if(mpp.find(sum -k)!=mpp.end()){
                cnt += mpp[sum-k];
            }
            mpp[sum]++;
        }
        return cnt;
        
    }
};