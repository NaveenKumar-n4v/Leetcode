class Solution {
private:
    void func(int left, int right, int n, vector<string>&ans, string temp){
        
        if(temp.size() == 2 * n){
            ans.push_back(temp);
            return;
        }
        if(left < n){
            temp.push_back('(');
            func(left+1, right, n, ans, temp);
            temp.pop_back();
        }
        if (right < left){
            temp.push_back(')');
            func(left, right+1, n, ans, temp);
            temp.pop_back();
        }
    }
    
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        func(0, 0, n, ans, "");
        return ans;
    }
};