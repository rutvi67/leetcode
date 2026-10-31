class Solution {
private:
    int minDiff = INT_MAX;
    int prevVal = -1; 
    void inOrder(TreeNode* root) {
        if (!root) return;
        inOrder(root->left);
        if (prevVal != -1) {
            minDiff = min(minDiff, root->val - prevVal);
        }
        prevVal = root->val;
        inOrder(root->right);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        inOrder(root);
        return minDiff;
    }
};