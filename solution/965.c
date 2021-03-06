/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isUnivalTree(struct TreeNode* root){
    if(!root) {
        return true;
    }
    
    if(root->left) {
        if(root->val != root->left->val) {
            return false;
        } 
    }
    if(root->right) {
        if(root->val != root->right->val) {
            return false;
        } 
    }
    return isUnivalTree(root->left) && isUnivalTree(root->right);
}
