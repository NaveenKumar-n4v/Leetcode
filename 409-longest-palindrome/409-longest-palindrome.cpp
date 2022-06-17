class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int>mpp;
        for(auto i : s)mpp[i]++;
        bool flag = false;
        int counter = 0;
        for(auto i : mpp){
            cout<<i.first<<" "<<i.second<<" "<<counter<<endl;
            if(i.second % 2 == 0){
                counter += i.second;
            }
            if(i.second & 1){
                counter += i.second-1;
                flag = true;
            }
        }
        if(flag ==  true)counter++;
        return counter;
    }
};