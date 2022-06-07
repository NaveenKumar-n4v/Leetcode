// class Solution {
// private:
//     void funz(int idx, vector<int>&arr, vector<int>&ds, set<vector<int>>&ans){
//         if(idx == arr.size()){
//             ans.insert(ds);
//             return;
//         }
//         //pick
//         ds.push_back(arr[idx]);
//         funz(idx+1,arr,ds,ans);
//         ds.pop_back();
        
//         funz(idx+1,arr,ds,ans);
//     }
// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         set<vector<int>>ans;
//         vector<int>ds;
//         funz(0,nums,ds,ans);
//         vector<vector<int>>v(ans.begin(),ans.end());
//         return v;
        
//     }
// };


class Solution {
private:
    void helper(int idx, vector<vector<int>>&ans, vector<int>&ds, vector<int>&arr){
        ans.push_back(ds);
        for(int i= idx;i<arr.size();i++){
            if(i>idx && arr[i]==arr[i-1]){
                continue;
            }
            ds.push_back(arr[i]);
            helper(i+1, ans, ds, arr);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0, ans, ds, nums);
        return ans;
    }
};