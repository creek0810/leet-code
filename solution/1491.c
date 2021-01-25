int cmp(const void *a, const void *b) {
    int c = *(int *)a;
    int d = *(int *)b;
    if(c < d) {
      return -1;
    } else if (c == d) {
      return 0;
    }
    return 1;
}

double average(int* salary, int salarySize){
    double result = 0;
    qsort((void *)salary, salarySize, sizeof(int), cmp);
    
    for(int i=1; i<salarySize-1; i++) {
        result += salary[i];
    }
    return result / (salarySize - 2);
}
