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
    // void preorder(TreeNode* root, vector<int>&ans){
    //     if(root == NULL)return;
    //     ans.push_back(root->val);
    //     preorder(root->left, ans);
    //     preorder(root->right, ans);
    // }
    vector<int> preorderTraversal(TreeNode* root) {
        // vector<int>ans;
        // preorder(root, ans);
        // return ans;
        
        
        // //iterative preorder
        // vector<int>ans;
        // stack<TreeNode*>st;
        // st.push(root);
        // if(root == NULL)return ans;
        // while(!st.empty()){
        //     root = st.top();
        //     st.pop();
        //     ans.push_back(root->val);
        //     if(root->right != NULL)st.push(root->right);
        //     if(root->left != NULL)st.push(root->left);
        // }
        // return ans;
        
        
        //Code for all traversals in one stack
        stack<pair<TreeNode*,int>>st;
        vector<int>preorder;
        vector<int>inorder;
        vector<int>postorder;
        TreeNode* node = root;
        st.push({root, 1});
        if(node == NULL)return preorder;
        while(!st.empty()){
            auto it = st.top();
            st.pop();
            if(it.second == 1){
                preorder.push_back(it.first->val);
                it.second++;
                st.push(it);
                if(it.first->left != NULL)st.push({it.first->left, 1});
            }
            
            else if(it.second == 2){
                inorder.push_back(it.first->val);
                it.second++;
                st.push(it);
                if(it.first->right != NULL)st.push({it.first->right, 1});
            }
            else{
                postorder.push_back(it.first->val);
            }
        }
        return preorder;
    }
};