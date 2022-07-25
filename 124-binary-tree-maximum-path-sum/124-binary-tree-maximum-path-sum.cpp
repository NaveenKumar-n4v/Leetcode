/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int findHeight(TreeNode* root, int& maxi){
        if(root == NULL)return 0;
        
        // using 0 to elimate negative path sum's
        int l = max(0, findHeight(root->left, maxi));
        int r = max(0, findHeight(root->right, maxi));
        
        maxi = max(maxi, root->val + l + r);
        
        return root->val + max(l, r);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        findHeight(root, maxi);
        return maxi;
    }
};