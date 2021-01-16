/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** groupThePeople(int* groupSizes, int groupSizesSize, int* returnSize, int** returnColumnSizes){
    // init
    *returnColumnSizes = (int*)calloc(1, sizeof(int) * 500);    
    *returnSize = 0;
    
    // define var about result
    int **result = (int**)malloc(sizeof(int*) * 500);
    int *resultSize = *returnColumnSizes;
    int resultCnt[505] = {0};
    
    // start construct
    for(int i=0; i<groupSizesSize; i++) {
        // find result loc
        int loc = 0;
        bool newGroup = (i == 0);
        while(true) {
            if(resultSize[loc] == 0) {
                newGroup = true;
                break;
            } else if(
                resultSize[loc] == groupSizes[i] && 
                resultCnt[loc] != resultSize[loc]
            ) {
                break;
            } 
            loc++;
        }
        
        printf("%d:\nloc: %d\nnewGroup:%d\n\n", i, loc, newGroup);
        // update newGroup
        if(newGroup) {
            resultSize[loc] = groupSizes[i];
            result[loc] = (int*)malloc(sizeof(int) * groupSizes[i]);
            (*returnSize) ++;
        }
        
        result[loc][resultCnt[loc]++] = i; 
    }
    printf("%d\n", *returnSize);
    return result;
}
