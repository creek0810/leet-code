/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original) {
            return NULL;
        }
        
        if(original == target) {
            return cloned;
        } else {
            TreeNode *leftResult = getTargetCopy(original->left, cloned->left, target);
            TreeNode *rightResult = getTargetCopy(original->right, cloned->right, target);
            if(leftResult) {
                return leftResult;
            }
            if(rightResult) {
                return rightResult;
            }
            
        }
        return NULL;
    }
};
