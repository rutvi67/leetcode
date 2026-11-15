class Solution {
public:
    int sum = 0;
    void dfs(TreeNode* root) {
        if(root == nullptr)
            return;
        dfs(root->right);
        sum += root->val;
        root->val = sum;

        dfs(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {

        dfs(root);

        return root;
    }
};