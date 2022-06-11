class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>x;
        map<int,int>mpp;
        priority_queue<pair<int,int>>pq;
        for(auto it : nums){
            mpp[it]++;
        }
        for(auto it : mpp){
            pq.push({it.second,it.first});
        }
        while(k--){
            x.push_back(pq.top().second);
            pq.pop();
        }
        return x;
        
    }
};