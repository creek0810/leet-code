/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool prune(struct TreeNode* root) {
    if(!root) {
        return false;
    }
    
    bool leftResult = prune(root->left);
    bool rightResult = prune(root->right);
    
    // start prune
    if(!leftResult) {
        root->left = NULL;
    }
    
    if(!rightResult) {
        root->right = NULL;
    }
    // result
    if(!leftResult && !rightResult && root->val == 0) {
            return false;
    }
    return true;
}

struct TreeNode* pruneTree(struct TreeNode* root){
    bool leftResult = prune(root->left);
    bool rightResult = prune(root->right);
    
    // start prune
    if(!leftResult) {
        root->left = NULL;
    }
    
    if(!rightResult) {
        root->right = NULL;
    }
    // result
    if(!leftResult && !rightResult && root->val == 0) {
            return NULL;
    }
    return root;
}

