class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long answer = 1e18;
        long long maxSum =0;
        sort(beans.begin(),beans.end());
        for(auto it : beans) maxSum +=it;
        long long n = beans.size();
        for(long long i=0;i<n;i++){
            long long value = (maxSum - (n-i)*(long long)beans[i]*1LL);
            answer = min(value,answer);
        }
        return answer;
        
    }
};