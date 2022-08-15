class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int minPrice = INT_MAX;
        int profit = 0;
        for(auto i : prices){
            
            minPrice = min(i, minPrice);
            profit = max(profit, i - minPrice);
            
        }
        return profit;
    }
};