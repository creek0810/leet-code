/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    *returnSize = candiesSize;
    bool *result = malloc(sizeof(bool) * candiesSize);
    for(int i=0; i<candiesSize; i++) {
        int newVal = candies[i] + extraCandies;
        result[i] = true;
        for(int j=0; j<candiesSize; j++) {
            if(candies[j] > newVal) {
                result[i] = false;
                break;
            }
        }
    }
    return result;
}
