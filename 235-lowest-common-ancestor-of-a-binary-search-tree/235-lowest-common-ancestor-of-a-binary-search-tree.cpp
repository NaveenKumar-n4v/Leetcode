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
        
        
        if(root == NULL)return NULL;
        
        // find value in root
        int x = root->val;
        
        // if both p and q is smaller go to left subtree
        if(x > p->val && x > q->val){
            return lowestCommonAncestor(root->left, p, q);
        }
        
        // if both p and q is greater go to right subtree
        if(x < p->val && x < q->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        
        // one small or one greater then thats the last point of intersection and return the intersion
        return root;
    }
};