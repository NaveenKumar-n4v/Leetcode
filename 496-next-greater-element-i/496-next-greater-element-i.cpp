class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        // stack<int>st;
        // vector<int>ans;
        // int cnt =0;
        // for(auto it : nums1){
        //     int flag = 0;
        //     for(auto i : nums2){
        //         if(st.top() == it){
        //             flag++;
        //         }
        //         if (flag > 0 && i > st.top()){
        //             ans.push_back(i);
        //             break;
        //         }
        //         st.push(i);
        //         cnt++;
        //     }
        //     if(ans.size() != cnt)ans.push_back('-1');
        // }
        // return ans;
        
        
        vector<int>nge(nums2.size());
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            if(st.empty() ==  false){
                nge[i] = st.top();
            }
            else
                nge[i] = -1;
            
            st.push(nums2[i]);
        }
        for(auto i : nge)cout<<i<<" ";
        map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums2.size();i++){
            mpp[nums2[i]] = i;
        }
        for(auto i : mpp)cout<<i.first<<" "<<i.second<<endl;
        for(int i=0;i<nums1.size();i++){
            if(mpp.find(nums1[i]) != mpp.end()){
                ans.push_back(nge[mpp[nums1[i]]]);
            }
        }
        return ans;
        
    }
};