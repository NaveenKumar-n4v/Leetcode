class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        do{
            vector<int>x;
            for(auto i : nums){
                x.push_back(i);
}
            v.push_back(x);
            
        }while(next_permutation(nums.begin(),nums.end())); 
        return v;
        
    }
};