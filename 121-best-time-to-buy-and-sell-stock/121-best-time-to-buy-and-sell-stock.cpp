class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=prices[0];
        int mx=0;
        for(int i=1;i<prices.size();i++){
            mi = min(mi,prices[i]);
            mx = max(mx,prices[i]-mi);
        }
        return mx;
    }
};