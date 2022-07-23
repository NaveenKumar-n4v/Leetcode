class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // vector<int>ans;
        // stack<TreeNode*>st;
        // TreeNode* temp = root;
        // while(true){
        //     if(temp != NULL){
        //         st.push(temp);
        //         temp = temp->left;
        //     }
        //     else{
        //         if(st.empty())break;
        //         temp = st.top();
        //         st.pop();
        //         ans.push_back(temp->val);
        //         temp = temp->right;
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
        return inorder;
    }
};