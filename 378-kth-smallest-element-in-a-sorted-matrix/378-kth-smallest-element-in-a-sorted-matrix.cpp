class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq;
        for(auto it : matrix){
            for(auto x : it){
                pq.push(x);
                if(pq.size()>k)pq.pop();
            }
        }
        return pq.top();
    }
};