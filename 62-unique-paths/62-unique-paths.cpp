class Solution {
private:
    int func(int i, int j, int m, int n, vector<vector<int>>&dp){
        if(i == m-1 && j == n-1)return 1;
        if(i >= m || j >= n )return 0;
        if(dp[i][j] != -1)return dp[i][j];
        return dp[i][j] = func(i+1, j, m, n, dp) + func(i, j+1, m, n, dp);
        
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m, vector<int>(n, -1));
        return func(0, 0, m, n, dp);
        
        // int N = m + n - 2;
        // int r = n - 1;
        // long long ans  = 1;
        // for(int i = 1;i<= n-1;i++){
        //     ans = ans * ( N - r + i ) / i; 
        // }
        // return ans;
    }
};