class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num>0){
            int digit = num%10;
            num /=10;
            v.push_back(digit);
}
        sort(v.begin(),v.end());
        int sum =0;
        int n = v.size();
        for(int i=0;i<n/2;i++){
            sum += (v[i]*10)+v[n-i-1];
}
        return sum;
        
    }
};