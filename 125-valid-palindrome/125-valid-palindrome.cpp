class Solution {
private:
    bool recursionString(string &sx, int &start, int &end){
        if(start >= end){
            return true;
        }
        return ((sx[start] == sx[end])&&recursionString(sx,++start,--end));
    }
public:
    bool isPalindrome(string s) {
       string sx;
        for(auto i : s){
            if((i >= 65 && i <=90)||(i>=97 && i <= 122)||(i >= 48 && i <=57)){
                sx += tolower(i);
            }
        }
        cout<<sx<<endl;
        // if(sx.size()==0)return true;
        int start = 0;
        int end = sx.size()-1;
        return recursionString(sx,start,end);
    }
};