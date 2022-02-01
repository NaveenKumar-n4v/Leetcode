class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int j = matrix[0].size()-1;
        int i = 0;
        while(i<n && j>=0){
        int topRight=matrix[i][j];
            if(topRight==target)
            {
                return true;
                break;
            }
            if(target>topRight){
                i++;
            }
            else if(target<topRight){
                j--;
            }
        }
        return false;
        
        
    }
};