#define ll long long
class Solution {
public:
    int mySqrt(int x) {
        ll low = 1;
        ll high = x;
        while(low <=high){
            ll mid = low + (high - low)/2;
            if(mid * mid == x)return mid;
            else if(mid*mid>x){
                high = mid-1;
            }
            else
                low = mid+1;
        }
        return high;
        
    }
};