class Solution {
public:
    string minWindow(string s, string t) {
        
        map<char,int>mpp;
        for(auto i :t)mpp[i]++;
        int counter = t.size();
        
        int l=0,r=0;
        int n = s.size();
        int mini = INT_MAX;
        int start = -1;
        while(r<n){
            if(mpp[s[r]]>0)counter--;
            mpp[s[r]]--;
            //Moving L when window is full of t
            while(counter == 0){
                if(r-l+1<mini){
                    mini = r-l+1;
                    start = l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0)counter++;
                l++;
                
            }
            r++;
        }
        if(start == -1)return "";
        return s.substr(start,mini);
        
    }
};