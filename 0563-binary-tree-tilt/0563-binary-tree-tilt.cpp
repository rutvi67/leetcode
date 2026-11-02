class Solution {
public:
    int total = 0;
    int dfs(TreeNode* root)
    { if(root == NULL)
        {
            return 0;
        }
        int left = dfs(root->left);
        int right = dfs(root->right);
        total += abs(left - right);
        return root->val + left + right;
    }
    int findTilt(TreeNode* root)
    {
        dfs(root);
        return total;
    }
};