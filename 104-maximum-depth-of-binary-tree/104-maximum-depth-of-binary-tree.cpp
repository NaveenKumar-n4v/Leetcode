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
    int maxDepth(TreeNode* root) {
        // if(root == NULL)return 0;
        // int l = maxDepth(root->left);
        // int r = maxDepth(root->right);
        // return 1 + max(l,r);
        
        //level-order
        if(root == NULL)return 0;
        queue<TreeNode*>q;
        q.push(root);
        int ans =0;
        while(!q.empty()){
            int n = q.size();
            while(n--){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL)q.push(node->left);
                if(node->right != NULL)q.push(node->right);
            }
            ans++;
        }
        return ans;
    }
};