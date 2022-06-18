class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(int i = 0;i<strs.size();i++){
            string temp  = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mpp[strs[i]].push_back(temp);
        }
        vector<vector<string>>v;
        for(auto i : mpp)v.push_back(i.second);
        return v;
    }
};