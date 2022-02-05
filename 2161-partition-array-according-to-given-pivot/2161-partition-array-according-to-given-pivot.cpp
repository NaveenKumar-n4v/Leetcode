class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>v;
	int count = 0;
	for (auto i : nums) {
		if (i < pivot) {
			v.push_back(i);
		}
	}
	for (auto i : nums) {
		if (i == pivot) {
			v.push_back(i);
		}
	}
	for (auto i : nums) {
		if (i > pivot) {
			v.push_back(i);
		}
	}
	return v;
    }
};