class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        
        unordered_set<int>st;
        int sum = 0;
        int maxi = 0;
        int left = 0;
        int right = 0;
        
        while(right != nums.size()){
            
            while(st.find(nums[right]) != st.end()){
                st.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
            st.insert(nums[right]);
            sum += nums[right];
            right++;
            maxi = max(maxi,sum);
        }
        return maxi;
        
    }
};