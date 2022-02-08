class Solution {
public:
    int addDigits(int num) {
    int val=0;
    while(num>9)
    {
        int digit =0;
        while(num>0){
            digit += num%10;
            num /=10;
        }
        num = digit;
        val=0;
    }
        return num;
    }
};