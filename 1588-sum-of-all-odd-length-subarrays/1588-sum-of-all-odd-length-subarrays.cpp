class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
    vector<int>prefix(n+1,0);
    for(int i=0;i<arr.size();i++){
        prefix[i+1]=prefix[i]+arr[i];
    }
        int sum=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j+=2){
                   if(j==i){
                       sum +=arr[i];
                   }
                else
                    sum +=prefix[j+1]-prefix[i];
                    
            }
        }
        return sum;
    }
};