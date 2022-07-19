class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        set<int>st;
        for(auto i : nums)st.insert(i);
        int totMaxi = 0;
        
        for(auto i : nums){
            
            if( !st.count(i-1)){
                
                int val = i;
                int count =1;
                
                while(st.count(val+1)){
                    val = val +1;
                    count = count +1;
                }
                
                totMaxi = max(totMaxi, count);
                
            }
            
            
        }
        
        return totMaxi;
    }
};