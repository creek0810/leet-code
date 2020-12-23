/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize){
    int *result = malloc(sizeof(int) * 0);
    *returnSize = 0;
    for(int i=left; i<=right; i++) {
        int tmp = i;
        bool isSelfDivide = true;
        while(tmp) {
            if(tmp % 10 == 0 || i % (tmp % 10) != 0) {
                isSelfDivide = false;
                break;
            }
            tmp /= 10;
        }
        
        if(isSelfDivide) {
            result = realloc(result, sizeof(int) *  (*returnSize + 1));
            result[(*returnSize)++] = i;
        }
        
    }
    return result;
}
