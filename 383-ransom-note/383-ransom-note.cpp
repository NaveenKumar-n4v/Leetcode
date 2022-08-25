class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int>mpp;
        for(auto i : ransomNote)mpp[i]++;
        for(auto i : magazine)mpp[i]--;
        for(auto i : mpp)
            if(i.second>0)
                return false;
        return true;
    }
};