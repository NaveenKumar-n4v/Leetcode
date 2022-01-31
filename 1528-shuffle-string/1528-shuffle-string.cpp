class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char>mpp;
        int k=0;
        for(auto i : indices){
            char c = s[k];
            mpp.insert({i,c});
            k++;
}
        string sx;
        for(auto i : mpp){
            sx+=i.second;
}
        return sx;
    }
};