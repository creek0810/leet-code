/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int sumEvenGrandparent(struct TreeNode* root){
    if(!root) {
        return 0;
    }
    
    int tmp = 0;
    if((root->val & 1) == 0) {
        struct TreeNode* leftChild = root->left;
        struct TreeNode* rightChild = root->right;
        if(leftChild) {
            tmp += (leftChild->left) ? leftChild->left->val : 0;
            tmp += (leftChild->right) ? leftChild->right->val : 0;
        }
        if(rightChild) {
            tmp += (rightChild->left) ? rightChild->left->val : 0;
            tmp += (rightChild->right) ? rightChild->right->val : 0;
        }
    }
    return tmp + sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
}
