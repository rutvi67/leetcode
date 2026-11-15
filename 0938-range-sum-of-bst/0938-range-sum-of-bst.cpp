class Solution {
public:

    int dfs(TreeNode* root, int low, int high) {
        if(root == nullptr)
            return 0;
        int sum = 0;
        if(root->val >= low && root->val <= high)
            sum += root->val;
        sum += dfs(root->left, low, high);
        sum += dfs(root->right, low, high);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return dfs(root, low, high);
    }
};