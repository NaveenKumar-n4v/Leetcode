#define ll long long 
class Solution {
public:
 bool helper(vector<int>&arr,long n,ll k,ll mid)
    {
        ll fn=0;
        for(ll i=0;i<k;i++)
        {
            fn+=(mid/arr[i]);
            if(fn>=n)
            return 1;
        }
        return 0;
    }
    
    long long minimumTime(vector<int>& v, int x) {
       
        //ranges
        ll l=0,r=1e14+10;
        while((r-l)>1){
            ll mid = (l+r)/2;
            if(helper(v, x,v.size(), mid)){
                r=mid;
            }
            else {
                l=mid;
            }
        }
        if(helper(v, x,v.size(), l))
            return l;
        else
            return r;
    }
};