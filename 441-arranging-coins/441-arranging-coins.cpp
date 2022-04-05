class Solution {
public:
    int arrangeCoins(int n) {
        
        
        int low = 1;
        int high = n;
        
        while(low <= high){
            long long mid = low + (high - low)/2;
            long long temp = mid * (mid+1)/2;
            
            if(temp == n)return mid;
            else if(temp < n){
                low = mid +1;
            }
            else
                high = mid-1;
            
        }
        cout<<high<<" "<<low<<endl;
        return high;
        
    }
};