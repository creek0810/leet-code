int rangeSumBST(struct TreeNode* root, int L, int R){
    // null
    if(!root) {
        return 0;
    }

    int result = 0;
    if(root->val >= L && root->val <= R) {
        result += root->val;
    }
    result += rangeSumBST(root->left, L, R);
    result += rangeSumBST(root->right, L, R);
    return result;
}
