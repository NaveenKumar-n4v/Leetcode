class Solution {
private:
    bool blackBox(vector<int>&arr, int mid, int m){
        int cnt =1;
        int sum =0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>mid)return false;
            
            if(sum + arr[i]>mid){
                cnt++;
                sum = arr[i];
            }
            else{
                sum +=arr[i];
            }
            
        }
        return cnt<=m;
    }
public:
    int splitArray(vector<int>& nums, int m) {
        
        /*
        range if m==1 max elem is answer
        if m == nums.size() sum is answer
        */
        
       
        int n = nums.size();
        int low = nums[n-1];
        int high;
        for(auto i : nums)high +=i;
        
        int betterAns = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(blackBox(nums,mid,m)== false){
                low = mid+1;
            }
            else{
                betterAns = mid;
                high = mid-1;
            }
            
            
        }
        return betterAns;
    }
};