

class Solution {
public:
    vector<int>a;
    void df(Node* root){
        if(root==NULL){
            return;
        }
        for (Node* child:root->children){
             df(child);    }
        a.push_back(root->val);
      }
    vector<int> postorder(Node* root){
        df(root);
        return a;
        }
    
};