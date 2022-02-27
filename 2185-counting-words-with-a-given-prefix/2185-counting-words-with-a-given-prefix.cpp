class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(auto each : words){
            int mi=0;
            if(each.size()>=pref.size()){
            for(int i=0;i<pref.size();i++){
                if(each[i]==pref[i])mi+=1;
            }
            if(mi == pref.size())cnt++;
            }
        }
        return cnt;
        
    }
};