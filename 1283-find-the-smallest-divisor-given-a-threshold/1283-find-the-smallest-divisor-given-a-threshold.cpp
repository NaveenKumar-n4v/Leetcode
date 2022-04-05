class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n = nums.size();
        // for max value of threshhold low should me 1
        int low = 1;
        // for min value of threshhold high should be max element
        int high = *max_element(nums.begin(),nums.end());
        int betterAns = high;
        while(low<=high){
            int mid = low + (high - low)/2;
            cout<<mid<<" ";
            int sum = 0;
            for(auto i : nums){
                sum += i/mid;
                // alternative to use ceil
                if(i%mid != 0){
                    sum +=1;
                }
            }
            cout<<sum<<endl;
            if(sum <= threshold){
                betterAns = mid;
                high = mid-1;
            }
            else
                low = mid+1;
            
        }
        return betterAns;
        
        
    }
};