class Solution {
public:
    bool isPerfectSquare(int num) {
        long long r = num;
        while(r*r>num)
        {
            r = (r+num/r)/2;
        }
        if(r*r==num)
        {
            return true;
        }
        return false;
        
        
    }
};