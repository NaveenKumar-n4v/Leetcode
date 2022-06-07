class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        stringstream ss(s);
        string word;
        while(ss>>word){
            v.push_back(word);
        }
        reverse(v.begin(),v.end());
        string nz;
        for(auto i : v){
            nz += i;
            nz += " ";
        }
        nz.pop_back();
        return nz;
        
    }
};