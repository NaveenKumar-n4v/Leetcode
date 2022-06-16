class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int minValueOnLeft = 1e9;
        int profit = 0;
        
        for(int i = 0;i<prices.size();i++){
            minValueOnLeft = min(prices[i], minValueOnLeft);
            profit = max(profit, prices[i] - minValueOnLeft);
        }
        return profit;
        
    }
};