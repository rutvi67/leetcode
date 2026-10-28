class Solution {
public:
    unordered_map<int,int> m;
    void dfs(TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }
        m[root->val]++;
        dfs(root->left);
        dfs(root->right);
    }
    vector<int> findMode(TreeNode* root)
    {
        dfs(root);
        int maxf= 0;
        for(auto p : m)
        {  maxf =
                max(maxf, p.second);
        }
        vector<int> ans;

        for(auto p : m)
        {
            if(p.second == maxf)
            {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};