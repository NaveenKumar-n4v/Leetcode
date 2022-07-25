class Solution {
public:
    int largestRectangleArea(vector<int>& start) {
        stack<int>st;
        int n = start.size();
        int nse[n];
        int pse[n];
        
        for (int i = n-1; i >= 0; --i)
	    {
		while (!st.empty() && start[st.top()] >= start[i]) {
			st.pop();
		}
		if (st.empty()) {
			nse[i] = n-1; 
		}
		else
			nse[i] = st.top()-1;
		st.push(i);
	    }
        while(!st.empty())st.pop();
        for (int i = 0; i < n; ++i)
	    {
		while (!st.empty() && start[st.top()] >= start[i]) {
			st.pop();
		}
		if (st.empty() == true) {
			pse[i] = 0;
		}
		else
			pse[i] = st.top()+1;
		st.push(i);
	    }
        
        // for(int i=0;i<n;i++)cout<<nse[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<n;i++)cout<<pse[i]<<" ";
        // cout<<endl;
                
                

        
        int maxi =0;
        for(int i=0;i<start.size();i++)maxi = max(maxi, (nse[i] - pse[i] +1)*start[i]);
        return maxi;
        
    }
};