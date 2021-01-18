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


struct TreeNode* insertIntoBST(struct TreeNode* root, int val){
    if(!root) {
        return newNode(val);
    }
    
    struct TreeNode* curNode = root;
    while(true) {
        if(curNode->val > val) {
            if(curNode->left) {
               curNode = curNode->left; 
            } else {
                curNode->left = newNode(val);
                break;
            }
        } else {
            if(curNode->right) {
               curNode = curNode->right; 
            } else {
                curNode->right = newNode(val);
                break;
                
            }
        }
    }
    return root;
}
