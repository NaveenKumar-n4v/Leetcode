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
vector<int>v;
private:
    void inorder(TreeNode* node){
        if(node == NULL)return;
        inorder(node->left);
        v.push_back(node->val);
        inorder(node->right);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        unordered_map<int, int>mpp;
        for(int i=0;i<v.size();i++){
            if(mpp.find(k-v[i]) != mpp.end()){
                return true;
            }
            mpp[v[i]] = i;
        }
        return false;
    }
};