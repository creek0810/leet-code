int minSteps(char * s, char * t){
    int len = strlen(s);
    // build alphaCnt
    int alphaCnt[2][26] = {0};
    for(int i=0; i<len; i++) {
        alphaCnt[0][s[i]-'a'] ++;
    }
    for(int i=0; i<len; i++) {
        alphaCnt[1][t[i]-'a'] ++;
    }
    // start cal result
    int result = 0;
    for(int i=0; i<26; i++) {
        if(alphaCnt[0][i] > alphaCnt[1][i]) {
            result += alphaCnt[0][i] - alphaCnt[1][i];
        }
    }
    
    
    return result;
}
