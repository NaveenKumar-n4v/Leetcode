class Solution {
private:
    void funz(int idx, int target, vector<vector<int>>&ans, vector<int>&ds, vector<int>&arr){
        if(target == 0){
            ans.push_back(ds);
            return;
}
        for(int i= idx; i<arr.size();i++){
            if(i>idx && arr[i]==arr[i-1]){
                // continue coz breaking skipps totally, and we need next iterations
                continue;
            }
            if(arr[i]>target)break;
            
            ds.push_back(arr[i]);
            funz(i+1, target - arr[i], ans, ds, arr);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& v, int target) {
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        vector<int>ds;
        funz(0, target, ans, ds, v);
        return ans;   
    }
};