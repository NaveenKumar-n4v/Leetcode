class Solution {
private:
    long double fact(int n){
        if(n == 1 || n == 0 ){
            return 1;
        }
        return n*fact(n-1);
    }
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int>ans;
        for(int i = 0;i<=rowIndex;i++){
            double temp = fact(rowIndex)/(fact(i)*fact(rowIndex-i));
            ans.push_back(temp);
        }
        return ans;
       
    }
};