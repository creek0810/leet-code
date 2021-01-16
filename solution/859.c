void buildCountTable(int *table, char *word, int len) {
    for(int i=0; i<len; i++) {
        table[word[i] - 'a'] ++;
    }
} 

bool buddyStrings(char * A, char * B){
    // use len to check
    int aLen = strlen(A);
    int bLen = strlen(B);
    if(aLen != bLen) {
        return false;
    }
    
    // use alphabet number to check
    int aTable[26] = {0};
    int bTable[26] = {0};
    buildCountTable(aTable, A, aLen);
    buildCountTable(bTable, B, bLen);
    bool notDistinct = false;
    for(int i=0; i<26; i++) {
        if(aTable[i] != bTable[i]) {
            return false;
        }
        if(aTable[i] > 1) {
            notDistinct = true;
        }
    }
    
    // use different alphabet number
    int diffCnt = 0;
    for(int i=0; i<aLen; i++) {
        if(A[i] != B[i]) {
            diffCnt ++;
        }
    }
    
    if(diffCnt == 2) {
        return true;
    }
    if(diffCnt == 0 && notDistinct) {
        return true;
    }
    return false;
}
