class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>final(nums.size(),0);
        int j=0,k=1;
        for(int i=0;i<nums.size()/2;i++){
            final[j]=nums[i];
            j+=2;
            final[k]=nums[n+i];
            k+=2;
        }
        return final;
    }
};