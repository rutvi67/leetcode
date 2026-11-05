

class Solution {
public:
    vector<int>a;
    void df(Node* root){
        if(root==NULL){
            return;
        }
        a.push_back(root->val);
        for (Node* child:root->children){
             df(child);
             
             }}
    vector<int> preorder(Node* root){
        df(root);
        return a;
        }
    
};