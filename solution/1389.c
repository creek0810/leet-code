/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    int *result = calloc(1, sizeof(int) * numsSize);
    *returnSize = numsSize;
    for(int i=0; i<numsSize; i++) {
        if(i != 0) {
            // push back
            int amount = numsSize - 1 - index[i];
            memmove(result + index[i] + 1, result + index[i], sizeof(int) * amount);
        }
        result[index[i]] = nums[i];
    }
    return result;
}
