class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        
        deque<int>dq;
        int n = nums.size();
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            //removes front elements which goes out of range
            if(!dq.empty() && dq.front() == i - k)dq.pop_front();
            
            //removes elements which are lesser from min-max
            while( !dq.empty() && nums[dq.back()] <= nums[i])dq.pop_back();
            
            dq.push_back(i);
            
            if(i >= k-1){
                ans.push_back(nums[dq.front()]);
            }
            
        }
        return ans;
        
        
        
    }
};