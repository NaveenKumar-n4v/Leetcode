class Solution {
public:
    bool areNumbersAscending(string s) {
        
        stringstream ss(s);
        string word;
        vector<int>v;
        while(ss>>word){
            if(isdigit(word[0])){
                v.push_back(stoi(word));
            }
        }
        for(int i = 1;i<v.size();i++){
            if(v[i]<=v[i-1])return false;
        }
        return true;
    }
};