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
public:
    int countNodes(TreeNode* root) {
        
        if(root == NULL)return 0;
        
        int l = lh(root);
        int r = rh(root);
        
        // on complete BT
        if( l == r )return pow(2, l) - 1;
        
        return 1 + countNodes(root->left) + countNodes(root->right); 
        
    }
    int lh(TreeNode* root){
        int cnt =0;
        while(root != NULL){
            cnt++;
            root = root->left;
        }
        return cnt;
    }
    int rh(TreeNode* root){
        int cnt =0;
        while(root != NULL){
            cnt++;
            root = root->right;
        }
        return cnt;
    }
};