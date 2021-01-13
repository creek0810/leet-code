

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decrypt(int* code, int codeSize, int k, int* returnSize){
    int *result = (int*)calloc(1, sizeof(int) * codeSize);
    *returnSize = codeSize;
    if(k > 0) {
        for(int i=0; i<codeSize; i++) {
            int newValue = 0;
            for(int j=1; j<=k; j++) {
                newValue += code[(i+j)%codeSize];
            }
            result[i] = newValue;
        }
    } else if(k < 0) {
        for(int i=0; i<codeSize; i++) {
            int newValue = 0;
            for(int j=-1; j>=k; j--) {
                newValue += code[(i+codeSize+j)%codeSize];
            }
            result[i] = newValue;
        }
    }
    
    return result;
}
