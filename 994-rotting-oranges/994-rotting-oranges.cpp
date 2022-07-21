class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty())return 0;
        int m = grid.size();
        int n = grid[0].size();
        int totalOranges = 0;
        queue<pair<int, int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] != 0)totalOranges++;
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, 1, -1};
        int total = 0; 
        int days =0;
        while(!q.empty()){
            int currentRotten = q.size();
            total += currentRotten;
            while(currentRotten--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                for(int idx =0; idx < 4; idx++){
                    int newI = i + dx[idx];
                    int newJ = j + dy[idx];
                    if(newI >= 0 && newI < m && newJ >=0 && newJ < n && grid[newI][newJ] == 1){
                        grid[newI][newJ] = 2;
                        q.push({newI, newJ});
                    }
                }
            }
            if(!q.empty()){
                days +=1;
            }
        }
        if(total == totalOranges){
            return days;
        }
        return -1;
    }
};