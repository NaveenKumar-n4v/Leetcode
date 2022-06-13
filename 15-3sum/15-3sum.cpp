class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // -4, -1, -1, 0, 1, 2
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        
        //for A
        for(int i = 0;i<(int)(nums.size()-2);i++){
            
            //check for duplicates
            if(i == 0 || (i>0  && nums[i] != nums[i-1])){
                
                int low = i+1;
                int high = nums.size()-1;
                int val = 0 - nums[i];
                
                while(low < high){
                    
                    if(nums[low] + nums[high] == val){
                        
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        v.push_back(temp);
                        
                        while(low < high && nums[low] == nums[low+1]){
                            low++;
                        }
                        while(high > low && nums[high] == nums[high-1]){
                            high--;
                        }
                        
                        // if low + high = 0;
                        // move both ptr;
                        low++;
                        high--;
                    }
                    else if (nums[low] + nums[high] < val){
                        low++;
                    }
                    else
                        high--;
                    
                }
                
            }
            
        }
        return v;
        
    }
};