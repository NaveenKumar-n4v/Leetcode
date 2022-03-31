class Solution {
public:
    string sortSentence(string s) {
        
        
        reverse(s.begin(),s.end());
        // cout<<s<<endl;
        
        stringstream ss(s);
        string word;
        vector<string>v;
        while(ss>>word){
            v.push_back(word);
            }
        sort(v.begin(),v.end());
        string x;
        for(int i=0;i<v.size();i++){
            reverse(v[i].begin(),v[i].end());
            x += v[i].substr(0,v[i].size()-1);
            x += " ";
        }
        x.pop_back();
        return x;      
    }
};