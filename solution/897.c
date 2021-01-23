/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* increasingBST(struct TreeNode* root){
    if(!root) {
        return NULL;
    }
    
    struct TreeNode* newRoot = root;
    if(root->left) {
        newRoot = increasingBST(root->left);
        root->left = NULL;
        struct TreeNode* curNode = newRoot;
        while(curNode->right) {
            curNode = curNode->right;
        }
        curNode->right = root;
    }
    root->right = increasingBST(root->right);
    return newRoot;
}
