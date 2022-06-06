class Solution {
private:
    void funz(int idx, vector<int>&arr, vector<int>&ds, vector<vector<int>>&ans){
        if(idx == arr.size()){
            ans.push_back(ds);
            return;
        }
        //pick
        ds.push_back(arr[idx]);
        funz(idx+1,arr,ds,ans);
        ds.pop_back();
        
        funz(idx+1,arr,ds,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        funz(0,nums,ds,ans);
        return ans;
        
    }
};