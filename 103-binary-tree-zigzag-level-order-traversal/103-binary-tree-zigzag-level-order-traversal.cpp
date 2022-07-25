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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        if(root == NULL)return ans;
        TreeNode* node = root;
        // bool flag = true;
        int ck =0;
        while(!q.empty()){
            int n = q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left != NULL){
                    q.push(node->left);
                }
                if(node->right != NULL){
                    q.push(node->right);
                }
            }
            if(ck%2 == 0)
                ans.push_back(temp);
            else
            {
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
            }
            ck++;
        }
        return ans;
        
    }
};