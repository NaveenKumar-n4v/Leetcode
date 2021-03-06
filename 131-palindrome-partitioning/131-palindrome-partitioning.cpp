class Solution {
private:
    bool isPalindrome(string s, int left, int right){
        while(left <=  right)
        {
            if(s[left++] != s[right--])return false;
        }
        return true;
    }
    void helper(int idx, vector<vector<string>>&ans, vector<string>&ds, string s){
        if(idx == s.size()){
            ans.push_back(ds);
            return;
        }
        for(int i =idx;i<s.size();i++){
              
           if(isPalindrome(s,idx,i)){
               ds.push_back(s.substr(idx, i-idx+1));
               helper(i+1, ans, ds, s);
               ds.pop_back();
           }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        helper(0, ans, ds, s);
        return ans;
    }
};