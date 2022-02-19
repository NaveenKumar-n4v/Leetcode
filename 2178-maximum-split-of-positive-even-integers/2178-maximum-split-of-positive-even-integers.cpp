class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>v={};
        if(finalSum&1){
            return v;
        }
        long long sum =0;
        long long val = 0;
        while(val<finalSum-sum){
            sum +=2;
            val +=sum;
            v.push_back(sum);
        }
        v.pop_back();
        long long sx=0;
        for(auto i : v)sx +=i;
        v.push_back(finalSum-sx);
        return v;
        
    }
};