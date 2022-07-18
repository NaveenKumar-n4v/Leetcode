class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        int count = 0;
        int elem = 0;
        
        for(auto i : nums){
            
            if(count == 0){
                elem = i;
            }
            if( elem == i){
                count++;
            }
            else
                count--;
            
        }
        return elem;
    }
};