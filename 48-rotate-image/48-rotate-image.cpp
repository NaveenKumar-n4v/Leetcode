class Solution {
private:
    void transpose(vector<vector<int>>&matrix){
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(i>j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
    }
    void swapRows(vector<vector<int>>&matrix){
        
        for(int i=0;i<matrix.size();i++){
        int left = 0;
        int right = matrix.size()-1;
        while(left < right){
            swap(matrix[i][left],matrix[i][right]);
            left++;
            right--;
        }
        }
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        swapRows(matrix);
    }
};