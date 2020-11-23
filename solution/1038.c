/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sum = 0;
void update(struct TreeNode* root) {
    if(!root) return;
    update(root->right);
    sum += root->val;
    root->val = sum;
    update(root->left);
    return;  
}

struct TreeNode* bstToGst(struct TreeNode* root) {
    sum = 0;
    update(root);
    return root;    
}


