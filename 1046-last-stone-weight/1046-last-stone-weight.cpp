class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int>pq;
        for(auto i : stones){
            pq.push(i);
        }
        // int n = pq.size();
        // cout<<n<<endl;
        // return 1;
        while(!pq.empty() && pq.size()>=2){
            int left = pq.top();
            pq.pop();
            int right = pq.top();
            pq.pop();
            pq.push(left-right);
        }
        return pq.top();
        
    }
};