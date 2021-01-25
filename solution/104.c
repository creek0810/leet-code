/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if(!root) {
        return 0;
    }
    int leftResult = maxDepth(root->left);
    int rightResult = maxDepth(root->right);
    return (leftResult > rightResult) ? leftResult + 1 : rightResult + 1;
}
