/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize){
    *returnSize = n;
    int *result = malloc(sizeof(int) * n);
    for(int i=0, j=0; i<n/2; i++) {
        result[j++] = (i + 1);
        result[j++] = -(i + 1);
    }
    
    if(n & 1) {
        result[n-1] = 0;
    }
    return result;
}
