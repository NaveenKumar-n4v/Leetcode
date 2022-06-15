class Solution {
public:
    int strStr(string haystack, string needle) {
        
        
        auto val = haystack.find(needle);
        if(val != string::npos){
            return val;
        }
        return -1;
        
    }
};