/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        //base case
        //if p and q are root then root is the LCA
        if(root == NULL || p == root || q == root){
            return root;
        }
        
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        
        //either p / q lies on right
        if(left  == NULL)return right;
        
        //either p / q lies on left
        if(right == NULL)return left;
        
        // p / q lies on both left and right
        else{
            return root;
        }
        return 0;
    }
};