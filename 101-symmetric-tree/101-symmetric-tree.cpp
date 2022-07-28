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
    bool func(TreeNode* left, TreeNode* right){
        
        if(left  == NULL || right == NULL){
            if(left == right){
                return true;
            }
            return false;
        }
        if(left->val != right->val){
            return false;
        }
        //call simoltanously and check the values 
        return func(left->left, right->right) && func(left->right, right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        
        if(root == NULL)return true;
        if(func(root->left, root->right))return true;
        return false;
    }
};