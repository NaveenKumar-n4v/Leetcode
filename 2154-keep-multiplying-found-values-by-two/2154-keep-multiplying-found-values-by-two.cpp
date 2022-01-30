class Solution {
public:
    int findFinalValue(vector<int>& v, int val) {
    for(int i=0;i<v.size();i++)
            for(int j=0;j<v.size();j++)
                if(v[j]==val){
                val = val*2;
            }
        
        return val;
    }
};