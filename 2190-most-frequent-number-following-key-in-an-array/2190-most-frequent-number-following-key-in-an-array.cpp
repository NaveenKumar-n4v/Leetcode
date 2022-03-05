class Solution {
public:
        int mostFrequent(vector<int>& nums, int key) {
    vector<int> cnt(1001);
    int n= size(nums) , mx=0, res=0;
    for(int i=0;i<n-1;i++){
        int x= nums[i+1];
        if(nums[i]==key) {  //if we remove this statement then it would be answer to question -> MOST FREQUENT ELEMENT
            cnt[x]++;
            if(cnt[x]>mx) mx= cnt[x] , res= x;
        }
    }
    return res;
}

};