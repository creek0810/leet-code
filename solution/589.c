void travel(struct Node* root, int* returnSize, int* result) {
    if(root) {
        result[*returnSize] = root->val;
        (*returnSize) += 1;
        for(int i=0; i<root->numChildren; i++) {
            travel(root->children[i], returnSize, result);
        }
    }
}

int* preorder(struct Node* root, int* returnSize) {
    int *result = malloc(sizeof(int) * 10000);
    *returnSize = 0;
    travel(root, returnSize, result);
    return result;
}

