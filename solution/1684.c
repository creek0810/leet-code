int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    // build allowedTable
    bool allowedTable[30] = {0};
    for(int i=0; i<strlen(allowed); i++) {
        allowedTable[allowed[i] - 'a'] = 1;
    }
    
    // start count
    int result = 0;
    for(int i=0; i<wordsSize; i++) {
        bool isConsistent = true;
        for(int j=0; j<strlen(words[i]); j++) {
            if(!allowedTable[words[i][j]- 'a']) {
                isConsistent = false;
                break;
            }
        }
        if(isConsistent) {
            result++;
        }
    }
    
    return result;
}
