class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())return false;
        map<char,int>mpp;
        map<char,int>mpp2;
        bool flag = true;
        for(auto it : s)mpp[it]++;
        for(auto it : t)mpp2[it]++;
        for (auto i = mpp.begin(),it = mpp2.begin(); i != mpp.end(), it != mpp2.end(); i++,it++){
            if((i->first == it->first) && (i->second == it->second)){
                continue;
            }
            else
                return false;
        }
        return true;
        
    }
};