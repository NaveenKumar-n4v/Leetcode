class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int left = 0;
        int right = v.size()-1;
        while(true){
            int sum = v[left]+v[right];
            if(sum == target){
                return {left+1,right+1};
            }
            else if (sum>target){
                right--;
            }
            else{
                left++;
            }
        }
        return {};
    }
};