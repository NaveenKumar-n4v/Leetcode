class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double ans = INT_MIN;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        double maxAvg = (double)sum/k;
        int left = 0;
        int right = k-1;
        int n = nums.size();
        while(right != n-1){
            right++;
            sum += nums[right];
            sum -= nums[left];
            left++;
            maxAvg = max(maxAvg,(double)sum/k);
        }
        return maxAvg;
    }
};