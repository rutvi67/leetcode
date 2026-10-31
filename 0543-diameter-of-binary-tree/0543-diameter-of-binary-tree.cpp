class Solution {
private:
    int maxDiameter = 0; 
    int dfs(TreeNode* node) {
        if (node == nullptr) return 0;
        int leftHeight = dfs(node->left);
        int rightHeight = dfs(node->right);
        maxDiameter = max(maxDiameter, leftHeight + rightHeight);
        return 1 + max(leftHeight, rightHeight);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxDiameter;
    }
};