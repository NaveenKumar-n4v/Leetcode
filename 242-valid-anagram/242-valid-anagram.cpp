class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s == t)return true;
        if(s.size() != t.size())return false;
        map<char,int>mpp;
        bool flag = true;
        for(auto it : s)mpp[it]++;
        for(auto it : t)mpp[it]--;
        for(auto it : mpp){
            if(it.second>0)return false;
        }
        return true;
        
    }
};