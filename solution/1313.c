/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    // calculate returSize
    *returnSize = 0;
    for(int i=0; i<numsSize; i+=2) {
        (*returnSize) += nums[i];
    }
    
    // generate result
    int* result = (int*)malloc(sizeof(int) * (*returnSize));
    for(int i=0, loc=0; i<numsSize; i+=2) {
        for(int j=0; j<nums[i]; j++) {
            result[loc++] = nums[i+1];
        }
    }
    return result;
}
