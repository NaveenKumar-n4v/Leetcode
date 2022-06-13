class Solution {
public:
    int myAtoi(string s) {
        
        int sign = 1;
        int i =0;
        int res = 0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        if(s[i] == '-' || s[i] == '+'){
            if(s[i]=='+')sign = 1;
            else
                sign = -1;
            i++;
        }
        while(i<s.length()&&(s[i]>='0'&&s[i]<='9'))  //traverse string till nondigit not found or string ends
        {
            int digit=(s[i]-'0')*sign;
            if(sign==1 && (res>INT_MAX/10 || (res==INT_MAX/10 && digit>INT_MAX%10))) return INT_MAX; //check for overflow
            if(sign==-1 &&(res<INT_MIN/10 || (res==INT_MIN/10 && digit<INT_MIN%10))) return INT_MIN; //check for underflow
            
            res=res*10+digit; // update res
            i++;
        }
    
    return res;
        
    }
};