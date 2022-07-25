class Solution {
private:
    int findHeight(TreeNode* root, int& maxi){
        if(root == NULL)return 0;
        
        // using 0 to elimate negative path sum's
        int l = max(0, findHeight(root->left, maxi));
        int r = max(0, findHeight(root->right, maxi));
        
        //find the maximum val of every node
        maxi = max(maxi, root->val + l + r);
        
        return root->val + max(l, r);
    }
public:
    int maxPathSum(TreeNode* root) {
        //maxi is INT_MIN coz max path sum can also be negative 
        int maxi = INT_MIN;
        findHeight(root, maxi);
        return maxi;
    }
};