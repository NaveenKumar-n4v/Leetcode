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
    void postorder(TreeNode* root, vector<int>&ans){
        if(root == NULL)return;
        postorder(root->left, ans);
        postorder(root->right, ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        // vector<int>ans;
        // postorder(root, ans);
        // return ans;
        
        // //iterative version - 2 stacks
        // vector<int>ans;
        // stack<TreeNode*>st1, st2;
        // TreeNode* node = root;
        // st1.push(node);
        // if(root == NULL)return ans;
        // while(!st1.empty()){
        //     node = st1.top();
        //     st1.pop();
        //     st2.push(node);
        //     if(node->left != NULL)st1.push(node->left);
        //     if(node->right!= NULL)st1.push(node->right);
        // }
        // while(!st2.empty()){
        //     node = st2.top();
        //     st2.pop();
        //     ans.push_back(node->val);
        // }
        // return ans;
        
        
        // //iterative version - 1 stack
        // vector<int>ans;
        // stack<TreeNode*>s1;
        // TreeNode* node = root;
        // TreeNode* temp = root;
        // while(!s1.empty() || node != NULL){
        //     //go to extreme left and push to single stack
        //     if(node != NULL){
        //         s1.push(node);
        //         node = node->left;
        //     }
        //     else{
        //         temp = s1.top()->right;
        //         if(temp == NULL){
        //             temp = s1.top();
        //             s1.pop();
        //             ans.push_back(temp->val);
        //             while(!s1.empty() && temp == s1.top()->right ){
        //                 temp = s1.top();
        //                 s1.pop();
        //                 ans.push_back(temp->val);
        //             }
        //         }
        //         else
        //             node = temp;
        //     }
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
        return postorder;
        
    }
};