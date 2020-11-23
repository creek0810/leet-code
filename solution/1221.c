int balancedStringSplit(char * s){
    int cnt = 0;
    int balance = 0;
    for(int i=0; i<strlen(s); i++) {
        // update balance
        if(s[i] == 'R') {
            balance ++;
        } else {
            balance --;
        }
        // split
        if(!balance) {
            cnt += 1;
        }
    }
    return cnt;
}
