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
    vector<vector<int>> levelorder(TreeNode* root){
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root == NULL)return ans;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>x;
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left != NULL)q.push(temp->left);
                if(temp->right != NULL)q.push(temp->right);
                x.push_back(temp->val);
            }
            ans.push_back(x);
        }
        return ans;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if(p == NULL && q == NULL) return true;
        // if( p != NULL && q == NULL) return false;
        // if( p == NULL && q != NULL) return false;
        // vector<vector<int>>v,v1;
        // v = levelorder(p);
        // v1 = levelorder(p);
        // if(v == v1)return true;
        // return false;
        
        
        if(p == NULL || q == NULL)return (p==q);
        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};