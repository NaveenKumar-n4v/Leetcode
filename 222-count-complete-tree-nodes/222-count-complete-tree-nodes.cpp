class Solution {
private:
    void func(TreeNode* node, int &cnt){
        if(node == NULL)return;
        cnt++;
        func(node->left, cnt);
        func(node->right, cnt);
    }
public:
    int countNodes(TreeNode* root) {
        
        if(root == NULL)return 0;
        
        int l = lh(root);
        int r = rh(root);
        
        // on complete BT
        if( l == r )return pow(2, l) - 1;
        
        return 1 + countNodes(root->left) + countNodes(root->right); 
        
        // int cnt =0;
        // if(root == NULL)return 0;
        // func(root, cnt);
        // return cnt;
        
    }
    int lh(TreeNode* root){
        int cnt =0;
        while(root != NULL){
            cnt++;
            root = root->left;
        }
        return cnt;
    }
    int rh(TreeNode* root){
        int cnt =0;
        while(root != NULL){
            cnt++;
            root = root->right;
        }
        return cnt;
    }
};