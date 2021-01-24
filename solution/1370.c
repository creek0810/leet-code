char * sortString(char * s){
    int cntTable[26] = {0};
    int len = strlen(s);
    for(int i=0; i<len; i++) {
        cntTable[s[i] - 'a'] ++;
    }
    
    int order = 1;
    int i = 0;
    while(i < len) {
        if(order == 1) {
          for(int j=0; j<26; j++) {
                if(cntTable[j]) {
                    s[i++] = 'a' + j;
                    cntTable[j] --;
                }
            }  
        } else {
            for(int j=25; j>=0; j--) {
                if(cntTable[j]) {
                    s[i++] = 'a' + j;
                    cntTable[j] --;
                }
            }  
        }
        order *= -1;
    }
    return s;
}
