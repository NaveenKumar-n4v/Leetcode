class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n= nums.size();
        map<int,int>freq;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==key){
                freq[nums[i+1]]++;
            }
        }
        int mx=0;
        int mi =0;
        for(auto i : freq){
            if(i.second>mx){
                mx = i.second;
                mi = i.first;
                
            }
        }
        return mi;
       
    }
};