int repeatedNTimes(int* A, int ASize){
    int cnt[10000] = {0};
    for(int i=0; i<ASize; i++) {
        cnt[A[i]] ++;
    }
    int target = ASize / 2;
    int result = -1;
    for(int i=0; i<10000; i++) {
        if(cnt[i] == target) {
            result = i;
            break;
        }
    }
    return result;
}
