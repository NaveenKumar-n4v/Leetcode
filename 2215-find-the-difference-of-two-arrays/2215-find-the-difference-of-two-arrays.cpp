class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
      vector<int>x;
      vector<int>y;
      set<int>s1(nums1.begin(),nums1.end());
      set<int>s2(nums2.begin(),nums2.end());
      set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),back_inserter(x));
      set_difference(s2.begin(),s2.end(),s1.begin(),s1.end(),back_inserter(y));
      return {x,y};
        
    }
};


