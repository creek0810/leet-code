char findTheDifference(char * s, char * t){
    int bal[26] = {0};
    int sLen = strlen(s);
    for(int i=0; i<sLen; i++) {
        bal[s[i] - 'a'] ++;
        bal[t[i] - 'a'] --;
    }
    bal[t[sLen] - 'a'] --;
    for(int i=0; i<26; i++) {
        if(bal[i]) {
            return 'a' + i;
        }
    }
    
    return 'a';
}
