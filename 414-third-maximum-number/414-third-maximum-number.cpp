class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        priority_queue<int>pq(nums.begin(),nums.end());
        if(pq.size()>2){
        pq.pop();
        pq.pop();
        return pq.top();
        }
        else
            return pq.top();
        return 0;
    }
};