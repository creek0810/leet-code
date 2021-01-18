/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* newNode(int val) {
    struct TreeNode* result = calloc(1, sizeof(struct TreeNode));
    result->val = val;
    return result;
}

void insert(struct TreeNode* tree, int val) {
    while(true) {
        if(val > tree->val) {
            if(tree->right) {
                tree = tree->right;
            } else {
                tree->right = newNode(val);
                break;
            }
            
        } else {
            if(tree->left) {
                tree = tree->left;
            } else {
                tree->left = newNode(val);
                break;
            }
        }
    }
}



struct TreeNode* bstFromPreorder(int* preorder, int preorderSize){
    struct TreeNode* result = newNode(preorder[0]);
    for(int i=1; i<preorderSize; i++) {
        insert(result, preorder[i]);
    }
    return result;
}
