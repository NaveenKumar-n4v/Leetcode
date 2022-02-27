class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        int k = pref.size();
        for(auto each : words){
            if(each.size()>=k){
                if(each.substr(0,k)==pref)cnt++;
            }
        }
        return cnt;
        
    }
};