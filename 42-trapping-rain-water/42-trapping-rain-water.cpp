class Solution {
public:
    int trap(vector<int>& height) {
        
        /*
        O(N*N)
        */
//         int counter = 0;
//         for(int i = 0;i<height.size();i++){
            
//             // int leftMaxi = *max_element(height.begin(),height.begin()+i+1);
//             // int rightMaxi = *max_element(height.begin()+i,height.end());
            
//             int leftMaxi =0;
//             int rightMaxi =0;
            
//             int j = i;
//             while(j>=0){
//                 leftMaxi = max(height[j],leftMaxi);
//                 j--;
//             }
//             j = i;
//             while(j<height.size()){
//                 rightMaxi = max(height[j],rightMaxi);
//                 j++;
//             }
            
//             cout<<leftMaxi<<" "<<rightMaxi<<" ";
            
//             int val = min(leftMaxi,rightMaxi);
//             counter += abs(val-height[i]);
//             cout<<counter<<endl;
//         }
        
//         return counter;
        
        
        /*
        O(3N)
        */
//         int n =height.size();
//         vector<int>prefix(n);
//         vector<int>suffix(n);
//         int counter =0;
        
//         for(int i = 0;i<n;i++){
            
//             if(i == 0){
//                 prefix[i] = height[i];
//             }
//             else
//                 prefix[i] = max(prefix[i-1], height[i]);
//         }
//         for(int i = n-1; i>=0; i--){
//             if(i == n-1){
//                 suffix[i] = height[i]; 
//             }
//             else
//                 suffix[i] = max(suffix[i+1], height[i]);
//         }
        
//         for(int i = 0;i<n;i++){
            
//             int val = min(prefix[i],suffix[i]);
//             counter += val - height[i];
            
//         }
//         return counter;
        
        
        
        /*
        O(N) 2Pointer
        O(1)
        */
        int n = height.size();
        int left = 0;
        int right = n-1;
        int leftMaxi = 0;
        int rightMaxi = 0;
        int counter = 0;
        
        while(left <= right){
            
            if(height[left] <= height[right]){
                
                if(height[left] >= leftMaxi)leftMaxi = height[left];
                else
                    counter += abs(height[left] - leftMaxi);
                left++;
            }
            else{
                if(height[right] >= rightMaxi)rightMaxi = height[right];
                else
                    counter += abs(height[right]-rightMaxi);
                right--;
            }
            
        }
        return counter;
        
        
        
    }
};