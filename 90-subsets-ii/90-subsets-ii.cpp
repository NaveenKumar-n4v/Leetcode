class Solution {
private:
    void funz(int idx, vector<int>&arr, vector<int>&ds, set<vector<int>>&ans){
        if(idx == arr.size()){
            ans.insert(ds);
            return;
        }
        //pick
        ds.push_back(arr[idx]);
        funz(idx+1,arr,ds,ans);
        ds.pop_back();
        
        funz(idx+1,arr,ds,ans);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector<int>ds;
        funz(0,nums,ds,ans);
        vector<vector<int>>v(ans.begin(),ans.end());
        return v;
        
    }
};