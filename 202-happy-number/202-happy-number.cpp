// class Solution {
// public:
//     bool isHappy(int n) {
        
//         int count = 0;
//        while(n != 1)
//         {
//             int sum = 0;
//             while(n != 0)
//             {
//                 int num = n%10;
//                 sum += num*num;
//                 n/=10;
//                 count++;
//             }
//             n = sum;
//             if(count > 31)
//                 return false;
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool isHappy(int n) {
        int count =0;
        while(n>1){
            int val =0;
            while(n){
                int digit =n%10;
                val += digit*digit;
                n/=10;
                count++;
            }
            n = val;
            if(count>31){
                return false;
            }
        }
        return n==1;
        
    }
};