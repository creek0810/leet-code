bool uniqueOccurrences(int* arr, int arrSize){
    int cntTable[2005] = {0};
    bool exists[1005] = {0};
    for(int i=0; i<arrSize; i++) {
        cntTable[arr[i] + 1000] ++;
    }
    for(int i=0; i<2005; i++) {
        if(cntTable[i] && exists[cntTable[i]]) {
            return false;
        }
        exists[cntTable[i]] = true;
    }
    return true;
}
