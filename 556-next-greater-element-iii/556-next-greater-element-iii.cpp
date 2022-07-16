class Solution {
public:
    int nextGreaterElement(int n) {
        
        // reverse(v.begin(),v.end());
        // int nt = v.size();
        // int maxi = v[nt-1];
        // for(int i = nt-2; i>=0; i--){
        //     if(v[i] <= v[i+1]){
        //         swap(v[i], v[i+1]);
        //         break;
        //     }
        //     else{
        //         continue;
        //     }
        // }
        // for(auto i : v)cout<<i<<" ";
        // cout<<endl;
        // string ns;
        // for(auto it : v)ns += to_string(it);
        // int ni = stoi(ns);
        // return ni;
        
        vector<int>v;
        while(n > 0){
            int temp = n % 10;
            n = n / 10;
            v.push_back(temp);
        }
        reverse(v.begin(),v.end());
        
        int nx = v.size();
        int val =-1;
        for(int i= nx-1; i>0;i--){
            if(v[i] > v[i-1]){
                val = i-1;
                break;
            }
        }
        if(val < 0){
            return -1;
        }
        else{
            for(int i =nx-1;i>val;i--){
                if(v[i] > v[val]){
                    swap(v[i], v[val]);
                    reverse(v.begin()+val+1, v.end());
                    break;
                }
            }
        }
        string s;
        for(auto it : v){
            s += to_string(it);
        }
        size_t ans = stoll(s);
        if(ans > INT_MAX)return -1;
        return ans;
        
        
    }
};