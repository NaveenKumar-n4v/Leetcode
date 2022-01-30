class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {    
        int right=0;
        for(auto i : nums){
        right+=i;
        }
        int mx = right;
        int left =0;
        vector<int>ans;
        for(int i=0;i<=nums.size();i++){
            if(left + right > mx){
                mx = left + right;
                ans.clear();
            }
            if(left + right == mx){
                ans.push_back(i);
            }
            if(i<nums.size()){
                right -= nums[i];
                left +=(nums[i]==0);
            }
}
        return ans;
        
    }
};