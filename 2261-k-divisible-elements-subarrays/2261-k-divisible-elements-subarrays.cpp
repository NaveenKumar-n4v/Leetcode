// #include <bits/stdc++.h>
// #define ll long long
// #define endl "\n"
// #define pb push_back
// #define vi vector<int>
// class Solution {
// public:
//     int countDistinct(vector<int>& v, int k, int p) {
//     int n = v.size();
// 	set<vector<int>>st;
// 	for (int i = 0; i < n; ++i)
// 	{
// 			int counter = 0;
// 			vector<int>temp;
// 		    for (int j = i; j < n; j++) {
//             temp.pb(v[j]);
//             if(v[j]%p==0)counter++;
// 			if (counter > k) {
//                 break;
// 			}
// 			st.insert(temp);
// 		}
// 	}
//     return st.size();
//     }
// };
class Solution
{
public:
    int countDistinct(vector<int>& nums, int k, int p)
    {
        set<vector<int>> visited;

        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            vector<int> currSubArray;

            for (int j = i; j < nums.size(); j++)
            {
                currSubArray.push_back(nums[j]);
                if (nums[j] % p == 0)
                    count++;

                if (count > k)
                    break;

                visited.insert(currSubArray);
            }
        }

        return visited.size();
    }
};