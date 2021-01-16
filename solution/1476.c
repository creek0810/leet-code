typedef struct {
    int **value;
    int rowNum;
    int colNum;
} SubrectangleQueries;


SubrectangleQueries* subrectangleQueriesCreate(int** rectangle, int rectangleSize, int* rectangleColSize) {
    SubrectangleQueries *result = (SubrectangleQueries*)malloc(sizeof(SubrectangleQueries));
    result->rowNum = rectangleSize;
    result->colNum = *rectangleColSize;
    
    result->value = (int**)malloc(sizeof(int*) * rectangleSize);
    for(int i=-0; i<rectangleSize; i++) {
        result->value[i] = (int*)malloc(sizeof(int) * (*rectangleColSize));
        memcpy(result->value[i], rectangle[i], sizeof(int) * (*rectangleColSize));
    }
    return result;
}

void subrectangleQueriesUpdateSubrectangle(SubrectangleQueries* obj, int row1, int col1, int row2, int col2, int newValue) {
  for(int i=row1; i<=row2; i++) {
      for(int j=col1; j<=col2; j++) {
          obj->value[i][j] = newValue;
      }
  }
}

int subrectangleQueriesGetValue(SubrectangleQueries* obj, int row, int col) {
  return obj->value[row][col];
}

void subrectangleQueriesFree(SubrectangleQueries* obj) {
    for(int i=0; i<obj->rowNum; i++) {
        free(obj->value[i]);
    }
    free(obj->value);
}

/**
 * Your SubrectangleQueries struct will be instantiated and called as such:
 * SubrectangleQueries* obj = subrectangleQueriesCreate(rectangle, rectangleSize, rectangleColSize);
 * subrectangleQueriesUpdateSubrectangle(obj, row1, col1, row2, col2, newValue);
 
 * int param_2 = subrectangleQueriesGetValue(obj, row, col);
 
 * subrectangleQueriesFree(obj);
*/
