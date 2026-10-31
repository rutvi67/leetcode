class Solution {
private:
    int maxDiameter = 0;
    int dfs(TreeNode* root) {
        if (!root) return 0;
        int leftHeight = dfs(root->left);
        int rightHeight = dfs(root->right);
        maxDiameter = max(maxDiameter, leftHeight + rightHeight);
        return 1 + max(leftHeight, rightHeight);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxDiameter;
    }
};