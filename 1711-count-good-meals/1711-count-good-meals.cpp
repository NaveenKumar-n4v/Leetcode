
const int mod = 1000000007;
class Solution {
public:
    int countPairs(vector<int>& v) {
        unordered_map<int,int>mpp;
        sort(v.begin(),v.end());
        mpp[v[0]]++;
        int counter =0;
        for(int i = 1;i<v.size();i++){
            for(int j = 0;j<22;j++){
                if(mpp.find(pow(2,j)-v[i])!= mpp.end()){
                    counter+=mpp[pow(2,j) - v[i]]%mod;
                    counter %= mod;
                }
            }
            mpp[v[i]]++;
        }
    return counter %(int)mod;
    }
};