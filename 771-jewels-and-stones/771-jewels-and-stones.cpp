class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        unordered_map<char, int>mpp;
        for(auto i : stones)mpp[i]++;
        int cnt =0;
        for(auto i : jewels){
            if(mpp.find(i) != mpp.end())cnt += mpp[i];    
        }
        return cnt;
    }
};