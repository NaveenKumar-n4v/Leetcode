// class Solution {
// private:
//     void helper( vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds, map<int,int>&freq){
//         if(arr.size()==ds.size()){
//             ans.push_back(ds);
//             return;
//         }
//         for(int i=0;i<arr.size();i++){
//             if(freq[i] == 0){
//                 ds.push_back(arr[i]);
//                 freq[i]=1;
//                 helper(arr, ans, ds, freq);
//                 freq[i]=0;
//                 ds.pop_back();
//             }
//         }
        
//     }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>ds;
//         map<int,int>freq;
//         for(int i=0;i<nums.size();i++)freq[i]=0;
//         helper(nums, ans, ds, freq);
//         return ans;
//     }
// };

class Solution {
private:
    void helper(int idx, vector<vector<int>>&ans, vector<int>&arr){
        if(idx == arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i = idx;i<arr.size();i++){
            swap(arr[idx],arr[i]);
            helper(idx+1, ans, arr);
            swap(arr[idx],arr[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(0, ans, nums);
        return ans;
    }
};