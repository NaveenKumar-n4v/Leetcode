class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>x;
        sort(intervals.begin(), intervals.end());
        vector<int>temp = intervals[0];
        for(auto i : intervals){
            if(i[0] <= temp[1]){
                temp[1] = max(i[1],temp[1]);
            }
            else{
                x.push_back(temp);
                temp = i;
            }
        }
        x.push_back(temp);
        return x;
    }
};