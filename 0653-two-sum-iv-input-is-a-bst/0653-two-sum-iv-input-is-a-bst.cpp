
class Solution {
public:
    unordered_set<int>s;
    bool dfs(TreeNode* root, int k) {
        if (root==NULL){
            return false;
        }
        int need=k-root->val;
        if(s.count(need)){
            return true;
        }
        s.insert(root->val);
        return  dfs(root->left,k)||  dfs(root->right,k);
    }
    bool findTarget( TreeNode* root,int k ){
        return dfs(root,k);
    }
};