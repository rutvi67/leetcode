class BSTIterator {
public:
    vector<int> inorderVals;
    int idx = 0;
    void inorder(TreeNode* root)
    {
        if(root == nullptr)
            return;
        inorder(root->left);
        inorderVals.push_back(root->val);
        inorder(root->right);
    }

    BSTIterator(TreeNode* root)
    {
        inorder(root);
    }
    int next()
    {
        return inorderVals[idx++];
    }
    bool hasNext()
    {
        return idx < inorderVals.size();
    }
};