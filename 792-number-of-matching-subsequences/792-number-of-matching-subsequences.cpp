class Solution {
private:
    bool func(string s, string sub){
        int start =0;
        for(auto i : s){
            if(i == sub[start])start++;
            if(start == sub.size())return true;
        }
        return false;
    }
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        int ans = 0;
        unordered_map<string, int>mpp;
        for(auto i : words)mpp[i]++;
        for(auto i : mpp){
            if(func(s, i.first) == true)ans += i.second;
        }
        return ans;
        
    }
};