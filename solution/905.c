/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize){
    int *result = malloc(sizeof(int) * ASize);
    *returnSize = ASize;
    for(int i=0, l=0, r=ASize-1; i<ASize; i++) {
        if(A[i] & 1) {
            result[r--] = A[i];
        } else {
            result[l++] = A[i];
        }
    }
    return result;
}
