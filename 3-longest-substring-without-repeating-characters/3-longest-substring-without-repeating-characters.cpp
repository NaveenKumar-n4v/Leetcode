class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxi = 0;
        vector<int>mpp(256,-1);
        while(right != s.size()){
            if(mpp[s[right]] >= 0 ){
                left = max(mpp[s[right]]+1,left);
            }
            mpp[s[right]]=right;
            maxi = max(maxi, right - left + 1);
            right++;
        }
        return maxi;
    }
};