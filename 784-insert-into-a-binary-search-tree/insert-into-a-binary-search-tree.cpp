class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) {
            TreeNode* temp = new TreeNode(val);
            root = temp;
            return root;
        }
        if(root->val < val ){
            if(root-> right == NULL){
                TreeNode* temp = new TreeNode(val);
                root->right = temp;
                return root;
            }
            else insertIntoBST(root->right, val);
        }
        else{
            if(root-> left == NULL){
                TreeNode* temp = new TreeNode(val);
                root->left = temp;
                return root;
            }
            else insertIntoBST(root->left, val);       
        }
        
        return root;
    }
};