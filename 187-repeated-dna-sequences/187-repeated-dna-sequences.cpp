class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        unordered_map<string, int>mpp;
        vector<string>ans;
        if(s.size() < 10)return ans;
        for(int i=0;i<s.size()-9;i++){
        string t = s.substr(i,10);
        mpp[t]++;
        }
        for(auto it : mpp){
            if(it.second > 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};