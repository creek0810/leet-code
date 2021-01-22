int oddCells(int n, int m, int** indices, int indicesSize, int* indicesColSize){
    int table[50][50] = {0};
    for(int i=0; i<indicesSize; i++) {
        // row increment
        for(int j=0; j<m; j++) {
            table[indices[i][0]][j] ++;
        }
        // column increment
        for(int j=0; j<n; j++) {
            table[j][indices[i][1]] ++;
        }
    }
    
    int result = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(table[i][j] & 1) {
                result ++;
            }
        }
    }
    return result;   
}   
