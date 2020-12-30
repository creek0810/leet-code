void travel(struct Node* root, int* returnSize, int* result) {
    if(root) {
        for(int i=0; i<root->numChildren; i++) {
            travel(root->children[i], returnSize, result);
        }
        result[*returnSize] = root->val;
        (*returnSize) += 1;
    }
}

int* postorder(struct Node* root, int* returnSize) {
    int *result = malloc(sizeof(int) * 10000);
    *returnSize = 0;
    travel(root, returnSize, result);
    return result;
}
