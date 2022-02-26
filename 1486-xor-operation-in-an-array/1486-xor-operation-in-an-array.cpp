class Solution {
public:
    int xorOperation(int n, int start) {
        int val = start + (2*(n-1));
        int sum = start;
        for(int i=start+2;i<=val;i+=2)sum ^=i;
        return sum;
        
    }
};