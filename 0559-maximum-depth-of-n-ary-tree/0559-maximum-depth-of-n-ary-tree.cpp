
class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL){
            return 0;
        }
        int depth=0;
        for (Node* child: root->children){
            int d=maxDepth(child);
            depth=max(d,depth);

        }
        return depth+1;
    }
};