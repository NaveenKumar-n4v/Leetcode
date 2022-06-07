// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void helper(int idx, int sum, vector<int>&ans, vector<int>&ds, vector<int>&arr){
        if(idx == arr.size()){
            ans.push_back(sum);
            return;
        }
        // sum+=arr[idx];
        helper(idx+1,sum+arr[idx],ans,ds,arr);
        // sum-=arr[idx];
        helper(idx+1,sum,ans,ds,arr);
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        vector<int>ds;
        int sum =0;
        helper(0, sum, ans, ds, arr);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends