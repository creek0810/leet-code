/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int findMax(int *nums, int numsSize) {
    int maxVal = nums[0];
    int maxIdx = 0;
    for(int i=1; i<numsSize; i++) {
        if(nums[i] > maxVal) {
            maxVal = nums[i];
            maxIdx = i;
        }
    }
    return maxIdx;
}

struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize){
    int rootIdx = findMax(nums, numsSize);
    struct TreeNode* root = calloc(1, sizeof(struct TreeNode));
    root->val = nums[rootIdx];
    if(rootIdx != 0) {
        root->left = constructMaximumBinaryTree(nums, rootIdx);
    }
    if(rootIdx != numsSize - 1) {
        root->right = constructMaximumBinaryTree(nums + rootIdx + 1, numsSize - 1 - rootIdx);
    }
    return root;
}
