class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int>st;
        vector<int>ans(nums.size());
        int n = nums.size();
        for(int i = (2*n)-1; i>=0 ;i--){
            
            while(!st.empty() && nums[i%n] >= st.top()){
                st.pop();
            }
            //we need values for only first half
            if(i < n){
                
                if(!st.empty()){
                    ans[i] = st.top();
                }
                else
                    ans[i] = -1;
            }
            st.push(nums[i%n]);
        }
        return ans;
        
    }
};