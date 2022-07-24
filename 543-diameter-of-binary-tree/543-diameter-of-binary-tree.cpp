class Solution {

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi =0;
        height(root, maxi);
        return maxi;
    }
private:
    int height(TreeNode* node,int& maxi){
        if(!node){
            return 0;
        }
        int l = height(node->left, maxi);
        int r = height(node->right, maxi);
        
        maxi = max(maxi, (l+r));
        return 1+ max(l, r);
    }
};