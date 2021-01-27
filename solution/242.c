bool isAnagram(char * s, char * t){
    int sCnt[26] = {0}, tCnt[26] = {0};
    for(int i=0; i<strlen(s); i++) {
        sCnt[s[i] - 'a']++;
    }
    
    for(int i=0; i<strlen(t); i++) {
        tCnt[t[i] - 'a']++;
    }
    
    for(int i=0; i<26; i++) {
        if(sCnt[i] != tCnt[i]) {
            return false;
        }
    }
    return true;
}
