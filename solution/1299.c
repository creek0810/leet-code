/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize){
    int *result = malloc(sizeof(int) * arrSize);
    *returnSize = arrSize;
    result[arrSize - 1] = -1;
    for(int i=arrSize-2; i>=0; i--){
        result[i] = (result[i+1] > arr[i+1]) ? result[i+1] : arr[i+1];
    }
    return result;
}
