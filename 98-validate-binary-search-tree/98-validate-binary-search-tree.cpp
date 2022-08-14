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
    bool func(TreeNode* root, long leftVal, long rightVal){
        if(root == NULL)return true;
        if(root->val >= rightVal || root->val <= leftVal)return false;
        return func(root->left, leftVal, root->val) && func(root->right, root->val, rightVal);    
    }
public:
    bool isValidBST(TreeNode* root) {
        return func(root, LONG_MIN, LONG_MAX);
    }
};