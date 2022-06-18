class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxi = INT_MIN;
        
        while(left < right)
        {
            int temp = min(height[left], height[right]);
            int volume = abs((right - left)*temp);
            maxi = max(volume, maxi);
            
            while(height[left] <= temp && left<right)left++;
            while(height[right] <= temp && left<right)right--;
        }
        return maxi;
    }
};