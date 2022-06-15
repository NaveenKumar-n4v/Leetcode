class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        
//         string nx = s+s;
//         nx = s.substr(1, nx.size()-2);
//         return nx.find(s) == string::npos ? false : true;
        string S = s + s;
        S = S.substr(1, S.size() - 2);
        return S.find(s) == string::npos ? false : true;
        
    }
};