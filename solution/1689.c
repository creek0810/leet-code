int minPartitions(char * n){
    int max = 0;
    int i = 0;
    while(n[i] != 0) {
        int num = n[i] - '0';
        max = (max > num) ? max : num;
        i++;
    }
    return max;
}
