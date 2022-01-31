class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int mx =0;
        vector<int>prefix(n+1,0);
        for(int i=1;i<=n;i++){
            prefix[i]=prefix[i-1]+gain[i-1];
            mx = max(prefix[i],mx);
        }
        return mx;
    }
};