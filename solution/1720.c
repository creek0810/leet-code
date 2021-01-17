/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize){
    *returnSize = encodedSize + 1;
    int *result = (int*)malloc(sizeof(int) * (*returnSize));
    result[0] = first;
    for(int i=1; i<*returnSize; i++) {
        result[i] = result[i-1] ^ encoded[i-1];
    } 
    return result;
}
