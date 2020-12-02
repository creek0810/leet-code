
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int result = 0;
    for(int i=0; i<accountsSize; i++) {
        int tmpSum = 0;
        int *addr = *(accounts + i);
        for(int j=0; j<*accountsColSize; j++) {
            tmpSum += *(addr + j);
        }
        result = (tmpSum > result) ? tmpSum : result;
    }
    return result;
}
