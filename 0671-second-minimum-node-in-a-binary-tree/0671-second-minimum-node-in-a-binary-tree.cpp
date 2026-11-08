class Solution {
public:
    long minimum;
    long ans = LONG_MAX;
    void dfs(TreeNode* node)
    {
        if(node == NULL)
        {
            return;
        }
        if(node->val > minimum)
        {
            ans = min(ans,
                      (long)node->val);
        }
        dfs(node->left);
        dfs(node->right);
    }

    int findSecondMinimumValue(TreeNode* root)
    {
        minimum = root->val;
        dfs(root);
        return ans == LONG_MAX ? -1: ans;
    }
};