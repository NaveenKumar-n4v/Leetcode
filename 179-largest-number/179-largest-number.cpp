class Solution {
public:
    static bool comp(string a, string b){
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums) {
        
        
        vector<string>v;
        for(auto i : nums)v.push_back(to_string(i));
        // sort(nums.begin(), nums.end());
        sort(v.begin(), v.end(), comp);
        // for(auto i : v)cout<<i<<" ";
        // cout<<endl;
        string s;
        for(auto i : v)s += i;
        cout<<s<<endl;
        if(v[0] == "0")return "0";
        return s;
        
    }
};