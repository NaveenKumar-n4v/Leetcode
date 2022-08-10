class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>>ans;
        if(nums.empty())return ans;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<n;i++){
            
            long long target1 = target - nums[i];
            
            for(int j=i+1;j<n;j++){
                            
                long long target2 = target1 - nums[j];
            
                int left = j+1; 
                int right = n-1;
                
                while(left < right){
                    
                    int sum = nums[left] + nums[right];
                    
                    if(sum < target2){
                        left++;
                    }
                    else if (sum > target2){
                        right--;
                    }
                    else{
                        vector<int>temp(4, 0);
                        temp[0] = (nums[i]);
                        temp[1] = (nums[j]);
                        temp[2] = (nums[left]);
                        temp[3] = (nums[right]);
                        ans.push_back(temp);
                        
                        while(left < right && nums[left] == temp[2])left++;
                        while(left < right && nums[right] == temp[3])right--;
                        
                    }
                }
                while(j+1 < n && nums[j+1] == nums[j])j++;
            }
            
            while(i+1 < n && nums[i+1] == nums[i])i++;
        }
        return ans;
        
    }
};