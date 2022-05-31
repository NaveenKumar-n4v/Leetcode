class Solution {
private:
    void blackBox(int idx, int target, vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds){
        
        //base
        if(idx == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        
        //pick
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            blackBox(idx,target - arr[idx],arr,ans,ds);
            ds.pop_back();
        }
        
        //not pick
        blackBox(idx+1,target,arr,ans,ds);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<int>ds;
        vector<vector<int>>ans;
        blackBox(0, target, candidates, ans, ds);
        return ans;
        
    }
};