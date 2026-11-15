class Solution {
public:
    vector<int> inorderVals;

    void inorder(TreeNode* root) {
        if(root == nullptr) return;

        inorder(root->left);
        inorderVals.push_back(root->val);
        inorder(root->right);
    }

    TreeNode* increasingBST(TreeNode* root) {

        inorder(root);

        TreeNode* newRoot = new TreeNode(inorderVals[0]);
        TreeNode* curr = newRoot;

        for(int i = 1; i < inorderVals.size(); i++) {

            curr->right = new TreeNode(inorderVals[i]);
            curr = curr->right;
        }

        return newRoot;
    }
};