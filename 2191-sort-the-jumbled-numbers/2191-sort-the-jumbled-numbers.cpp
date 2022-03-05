class Solution {
public:
    vector<int> sortJumbled(vector<int>& m, vector<int>& nums) {
        
        vector<pair<int,int>> v;
        
        for(auto i: nums) {
            string s = to_string(i);
            string s1 = "";
            for(auto i: s) {
                s1 += to_string(m[i - '0']);
            }
            v.push_back({stoi(s1), i});
        }
        
        sort(v.begin(), v.end(), [](pair<int,int> x, pair<int,int> y) {
            return x.first < y.first;
        });
        
        vector<int>final;
        for(int i=0; i<nums.size(); ++i) {
            final.push_back(v[i].second);
        }
        
        return final;
    }
};