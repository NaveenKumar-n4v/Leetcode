class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int sum = 0;
        for(auto it : nums)sum += it;
        
        int val = sum - x;
        int n = nums.size();
        if( val == 0 ){
            return n;
        }
        
        int left = 0;
        int right = 0;
        
        int Maxi = 0;
        int tempSum =0;
        
        while(right <=n-1){
            tempSum +=nums[right];
            
            while( left < right && tempSum > val ){
                tempSum -=nums[left];
                left++;
            }
            
            if(tempSum == val){
                Maxi = max(Maxi,right - left + 1);
            }
            right++;
        }
        if(Maxi == 0)return -1;
        return n-Maxi; 
    }
};