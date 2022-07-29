class Solution {
private:
    bool func(string s1, string s2){
        vector<bool>visited(26, false);
        unordered_map<char, char>mpp;
        int n = s1.size();
        for(int i=0;i<n;i++){
            char c1 = s1[i], c2 = s2[i];
            if(mpp[c1] && mpp[c1] != c2)return false;
            if(!mpp[c1] && visited[c2-'a'] == true)return false;
            mpp[c1] = c2;
            visited[c2 - 'a'] = true;
        }
        return true;
        
    }
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(auto it : words){
            if(func(it, pattern))ans.push_back(it);    
        }
        return ans;
    }
};