class cmp{
    public:
    bool operator()(pair<int,string> a, pair<int,string> b) const{
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second>b.second) return true;
        return false;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        vector<string>x;
        unordered_map<string,int>mpp;
        for(auto i : words){
            mpp[i]++;
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, cmp> pq;
        for(auto it : mpp){
            pq.push({it.second,it.first});
        }
        while( k-- )
        {
            x.push_back(pq.top().second);
            pq.pop();
        }
        return x;
        
    }
};