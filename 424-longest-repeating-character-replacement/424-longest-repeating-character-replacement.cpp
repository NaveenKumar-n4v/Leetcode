class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0;
        int n = s.size();
        int totMaxi =0;
        unordered_map<int, int>mpp;
        int freq =0;
        while(r < n){
            mpp[s[r]]++;
            freq = max(freq, mpp[s[r]]);
            if((r-l+1)-freq > k){
                mpp[s[l]]--;
                l++;
            }
            totMaxi = max(totMaxi, (r-l+1));
            r++;
        }
        return totMaxi;
    }
};