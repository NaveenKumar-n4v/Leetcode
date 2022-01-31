class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int val =0;
        int mx =0;
      for(auto it : gain){
          val +=it;
          mx = max(mx,val);
          
      }
        return mx;
    }
};