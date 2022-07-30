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
    int widthOfBinaryTree(TreeNode* root) {
        
        
        int maxi = INT_MIN;
        queue<pair<TreeNode*, int>>q;
        q.push({root, 0});
        if(root == NULL){
            return 0;
        }
        while(!q.empty()){
            int sz = q.size();
            int idx = q.front().second;
            int l,r;
            for(int i =0;i<sz;i++){
                auto it = q.front();
                TreeNode* node = it.first;
                // logic to remove the overflow {making as 0, 1, 2, 3... instead of N, N+1, N+2, ....}
                long long val = it.second-idx;
                q.pop();
                if(i == 0)l = val;
                if(i == sz-1)r = val;
                if(node->left != NULL)q.push({node->left, val*2+1});
                if(node->right != NULL)q.push({node->right, val*2+2});
            }
            maxi = max(maxi, r - l + 1);
        }
        return maxi;
    }
};