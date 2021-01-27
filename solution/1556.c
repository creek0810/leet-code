char * thousandSeparator(int n){
    if(n == 0) {
        return "0";
    }
    
    int copy = n;
    int len = 0;
    while(copy) {
        len++;
        copy /= 10;
    }
    if(len % 3 == 0) {
        len += (len / 3) - 1;
    } else {
        len += (len / 3);
    }
    
    char *result = calloc(1, sizeof(char) * (len + 1));
    for(int cnt=0, loc=len-1; loc>=0; cnt++) {
        if(cnt && cnt % 3 == 0) {
            result[loc--] = '.';
        }
        result[loc--] = '0' + (n % 10);
        n /= 10;
    }
    return result;
}
