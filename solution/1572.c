int diagonalSum(int** mat, int matSize, int* matColSize){
    int result = 0;
    for(int i=0; i<matSize; i++) {
        int c1 = (*matColSize) - 1 - i; 
        result += mat[i][i];
        if(c1 != i) {
            result += mat[i][c1]; 
        }
    }
    return result;
}
