/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
private:
    void func(unordered_map<TreeNode*, TreeNode*>&mpp, TreeNode* root){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node->left != NULL){
                mpp[node->left] = node;
                q.push(node->left);
            }
            if(node->right != NULL){
                mpp[node->right] = node;
                q.push(node->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*>parentMark;
        // func to map nodes with parents coz cant traverse back in BT
        func(parentMark, root);
        // vis to not-recheck again
        unordered_map<TreeNode*, bool>visited;
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(target);
        visited[target] = true;
        int cnt=0;
        
        while(!q.empty()){
            int n = q.size();
            //size
            if(cnt++ == k)break;
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL && visited[node->left] == false){
                    q.push(node->left);
                    visited[node->left] = true;
                }
                if(node->right != NULL && visited[node->right] == false){
                    q.push(node->right);
                    visited[node->right] = true;
                }
                // stores the value in Q itself (nodes at dis K)
                if(parentMark[node] != NULL && visited[parentMark[node]] == false){
                    q.push(parentMark[node]);
                    visited[parentMark[node]] = true;
                }
            }
        }
        while(!q.empty()){
            TreeNode* x = q.front();
            q.pop();
            ans.push_back(x->val);
        }
        return ans;
        
    }
};