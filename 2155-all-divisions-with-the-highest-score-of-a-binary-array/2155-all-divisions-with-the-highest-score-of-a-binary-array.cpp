class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int left=0;
        int n =nums.size();
        int x=0;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                left++;
            }
            if(nums[i]==1){
                x++;
            }
        }
        v.push_back({x,0});
        left=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                left++;
            }
            if(nums[i]==1){
                x--;
            }
            v.push_back({left+x,i+1});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        vector<int>v1;
        int fk =v[0].first;
            int i=0;
      while(v[i].first==fk && i<n){
         v1.push_back(v[i].second);
          i++;
      }
        return v1;
        
    }
};