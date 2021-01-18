int minOperations(char ** logs, int logsSize){
    int cnt = 0;
    for(int i=0; i<logsSize; i++) {
        if(logs[i][0] == '.') {   
            if(logs[i][1] == '.') {
                cnt = (cnt > 0) ? cnt - 1 : cnt;
            }
        } else {
            cnt++;
        }
    }
    return (cnt < 0) ? 0 : cnt;
}
