class Solution {
private:
    struct MyComp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first != b.first) {
                return a.first > b.first;
            }
            else {
                return a.second < b.second;
            }
        }
};
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        vector<string>x;
        unordered_map<string,int>mpp;
        for(auto i : words){
            mpp[i]++;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, MyComp> pq;
        for(auto it : mpp){
            pq.push({it.second,it.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while( !pq.empty())
        {
            x.insert(x.begin(), pq.top().second);
            pq.pop();
        }
        return x;
        
    }
};