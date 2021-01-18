

char * freqAlphabets(char * s){
    char *result = calloc(1, sizeof(char) * 1005);
    int resultCnt = 0;
    int len = strlen(s);
    for(int i=0; i<len;) {
        bool hasPound = false;
        if(i+2<len) {
            hasPound = (s[i+2] == '#');
        }
        
        if(hasPound) {
            int loc = (s[i] - '0')  * 10 + (s[i+1] - '0') - 1; 
            result[resultCnt] = 'a' + loc;
            i += 3;
            resultCnt++;
        } else {
            result[resultCnt] = s[i] - '0' + 'a' - 1;
            i++;
            resultCnt++;
        }
    }
    return result;
}
