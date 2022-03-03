class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start =0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[start]){
                start++;
            }
        }
        return start == s.size();
    }
};