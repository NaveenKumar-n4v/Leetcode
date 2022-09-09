class Solution {
private:
   int mergeFunc(vector < int > & nums, int low, int mid, int high) {
  int total = 0;
  int j = mid + 1;
  for (int i = low; i <= mid; i++) {
    while (j <= high && nums[i] > (long)2* nums[j]) {
      j++;
    }
    total += (j - (mid + 1));
  }

  vector < int > t;
  int left = low, right = mid + 1;

  while (left <= mid && right <= high) {

    if (nums[left] <= nums[right]) {
      t.push_back(nums[left++]);
    } else {
      t.push_back(nums[right++]);
    }
  }

  while (left <= mid) {
    t.push_back(nums[left++]);
  }
  while (right <= high) {
    t.push_back(nums[right++]);
  }

  for (int i = low; i <= high; i++) {
    nums[i] = t[i - low];
  }
  return total;
}
    int mergeSort(vector<int>&a, int low, int high){
            
            if(low  >=  high)return 0;
            int ans = 0;
            
            
            int mid = ( low + high ) >> 1;
            ans += mergeSort(a, low, mid);
            ans += mergeSort(a, mid+1, high);
            
            
            ans += mergeFunc(a, low, mid, high);
    
            return ans;
    }
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        int ans = mergeSort(nums, 0, n-1);
        return ans;
    }
};