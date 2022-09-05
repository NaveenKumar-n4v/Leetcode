/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*>q;
        q.push(root);
        vector<vector<int>>ans;
        if(root == NULL)return ans;
        while(!q.empty()){
            int n = q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                Node* ptr = q.front();
                q.pop();
                temp.push_back(ptr->val);
                for(auto m : ptr->children){
                    q.push(m);
                }
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};