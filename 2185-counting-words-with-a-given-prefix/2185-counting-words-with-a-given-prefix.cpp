class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(auto each : words){
            if(each.find(pref)==0)cnt++;
        }
        return cnt;
        
    }
};