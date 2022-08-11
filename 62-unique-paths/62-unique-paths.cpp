class Solution {
private:
//     int func(int i, int j, int m, int n){
//         if(i == n-1 && j == m-1)return 1;
//         if(i >= n || j >= m )return 0;
//         return func(i+1, j, m, n) + func(i, j+1, m, n);
        
//     }
public:
    int uniquePaths(int m, int n) {
        // return func(0, 0, m, n);
        int N = m + n - 2;
        int r = m - 1;
        long long ans  = 1;
        for(int i = 1;i<= r;i++){
            ans = ans * ( N - r + i ) / i; 
        }
        return ans;
    }
};