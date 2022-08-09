class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;
        
        int x = 0;
            
        vector<int>ans;
        
        while( top <= bottom && left <= right ){
            
            if( x == 0 ){
                
                for(int i=left;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
                
            }
            
            if( x == 1 ){
                
                for(int i=top;i<=bottom;i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
                
            }
            
            if( x == 2 ){
                
                for(int i= right;i>= left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
                
            }
            
            if( x == 3 ){
                
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
                
            }
            
            x = (x+1)%4;
            
            
            
        }
        return ans;  
    }
};