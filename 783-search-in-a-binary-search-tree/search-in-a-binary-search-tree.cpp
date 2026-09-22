/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        // base case: reached a null node, value not found
        if (root == NULL){
            return NULL;
        }
        // current node matches the target value
        else if (root->val == val){
            return root;
        }
        // target is smaller, so search the left subtree
        else if (root->val > val){
            return searchBST(root->left, val);
        }
        // target is larger, so search the right subtree
        else{
            return searchBST(root->right, val);
        }
        return NULL;
    }
};