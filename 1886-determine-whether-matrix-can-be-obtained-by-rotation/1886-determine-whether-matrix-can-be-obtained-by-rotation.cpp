class Solution {
private:
    vector<vector<int>> shiftMatrix(vector<vector<int>>&temp){
        for(int i=0;i<temp.size();i++){
            for(int j=0;j<temp[i].size();j++){
                if(i>j){
                    swap(temp[i][j],temp[j][i]);
                }
            }
        }
        for(int i=0;i<temp.size();i++){
            int left = 0;
            int right = temp.size()-1;
            while(left < right){
                swap(temp[i][left],temp[i][right]);
                left++;
                right--;
            }
        }
        return temp;
    }
    
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++){
            if(shiftMatrix(mat)==target){
                return true;
            }
        }
        return false;
    }
};