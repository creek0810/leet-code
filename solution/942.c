/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* diStringMatch(char * S, int* returnSize){
    int len = strlen(S);
    *returnSize = len + 1;
    int *result = (int*)malloc(sizeof(int) * (*returnSize));
    for(int i=0; i<*returnSize; i++) {
        result[i] = i;
    }
    for(int i=0; i<len; i++) {
        if(S[i] == 'D') {
            int j = i;
            while(j >= 0 && S[j] == 'D') {
                int tmp = result[j];
                result[j] = result[j+1];
                result[j+1] = tmp;
                j--;
            }
        }
    }
    return result;
}
