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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root == NULL )return ans;
        map<int, map<int, multiset<int>>>mpp;
        queue<pair<TreeNode*, pair<int, int>>>q;
        q.push({root, {0, 0}});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* node = it.first;
            int x = it.second.first, y = it.second.second;
            mpp[x][y].insert(node->val);
            
            if(node->left)q.push({node->left, {x-1, y+1}});
            if(node->right)q.push({node->right, {x+1, y+1}});
        }
        for(auto m : mpp){
            vector<int>temp;
            for(auto n : m.second){
                temp.insert(temp.end(), n.second.begin(), n.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};