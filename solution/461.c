int hammingDistance(int x, int y){
    int tmp = x ^ y;
    int result = 0;
    while(tmp) {
        if(tmp & 1) {
            result ++;
        }
        tmp >>= 1;
    }
    return result;
}
