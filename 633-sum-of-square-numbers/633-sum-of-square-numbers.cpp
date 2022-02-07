class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0){
            return false;
        }
        long long left = 0,right=sqrt(c);
        while(left<=right)
        {
            long long val = left*left+right*right;
            if(val<c){
                left++;
            }
            else if(val>c){
                right--;
            }
            else
                return true;
        }
        return false;
    }
};