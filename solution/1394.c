int findLucky(int* arr, int arrSize){
    int result = -1;
    int cntTable[505] = {0};
    for(int i=0; i<arrSize; i++) {
        cntTable[arr[i]]++;
    }
    
    for(int i=1; i<505; i++) {
        if(i == cntTable[i]) {
            result = i;
        }
    }
    return result;
}
