class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
        int n = s.size();
        sort(s.begin(),s.end());
        string left = s[0];
        string right = s[n-1];
        
        string nx;
        for(int i = 0;i<left.size();i++){
            
            if(left[i] == right[i]){
                nx.push_back(left[i]);
            }
            else{
                break;
            }
            
        }
        return nx;    
    }
};