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
        
        map<int,int>nge;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            if(st.empty() ==  false){
                nge[nums2[i]] = st.top();
            }
            else
                nge[nums2[i]] = -1;
            
            st.push(nums2[i]);
        }
        vector<int>ans;
        for(auto it : nums1){
           ans.push_back(nge[it]); 
        }
        return ans;
        
    }
};