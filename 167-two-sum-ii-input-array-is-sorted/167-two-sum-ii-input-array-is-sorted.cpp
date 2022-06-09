class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int n = v.size();
        for(int i = 0;i < n-1;i++){
            int low = i+1;
            int high = n;
            while(low < high){
                int mid = low + (high - low)/2;
                if(v[mid] == target - v[i]){
                    return {i+1,mid+1};
                }
                else if(v[mid] > target - v[i]){
                    // low the range low the value
                    high = mid;
                }
                else
                    low = mid+1;
            }
        }
        return {};
    }
};