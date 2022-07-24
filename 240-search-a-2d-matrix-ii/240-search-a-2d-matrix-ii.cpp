class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int l = 0;
        int r = matrix[0].size()-1;
        
        while( l<n && r>=0){
            
            int val = matrix[l][r];
            if(target == val){
                return true;
            }
            if(target > val){
                l++;
            }
            if(target < val){
                r--;
            }
            
        }
        
        return false;
    }
};