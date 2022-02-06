class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        	if (nums.size() <= 2) {
		return nums;
	}
	vector<int>v1, v2;
	for (int i = 0; i < nums.size(); i++) {
		if (i & 1) {
			v1.push_back(nums[i]);
		}
		else if (i % 2 == 0)
			v2.push_back(nums[i]);
	};
	sort(v2.begin(), v2.end());
	sort(v1.rbegin(), v1.rend());
    int n=nums.size();
	nums.clear();
        int j=0,k=0;
	for (int i = 0; i < n; i++) {
		if(i%2==0){
            nums.push_back(v2[j]);
            j++;
        }
        else{
            nums.push_back(v1[k]);
            k++;
        }
	}
        return nums;
    }
};