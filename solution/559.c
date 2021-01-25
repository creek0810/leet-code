/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

int maxDepth(struct Node* root) {
    if(!root) {
        return 0;
    }
    
    if(!root->numChildren) {
        return 1;
    }
    
    int depth = 0;
    for(int i=0; i<root->numChildren; i++) {
        int tmp = maxDepth(root->children[i]) ;
        depth = (depth > tmp) ? depth : tmp;
    }
    
    return depth + 1;
}
