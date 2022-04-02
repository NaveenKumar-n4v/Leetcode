class Solution {
private:
    int firstOcc(vector<int>&arr, int x){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid] == x){
                ans = mid;
                high = mid-1;
                
            }
            else if(arr[mid]>x){
                high = mid-1;
            }
            else
                low = mid +1;
        }
        return ans;
    }
    int lastOcc(vector<int>&arr,int x){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid] == x){
                ans = mid;
                low = mid+1;
                
            }
            else if(arr[mid]>x){
                high = mid-1;
            }
            else
                low = mid +1;
        }
        return ans;
    }
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mini = firstOcc(nums,target);
        int maxi = lastOcc(nums,target);
        
        vector<int>v;
        if(maxi == -1 && mini == -1)return v;
        for(int i=mini;i<=maxi;i++){
            v.push_back(i);
        }
        return v;
    }
};