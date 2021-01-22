bool arrayStringsAreEqual(char ** word1, int word1Size, char ** word2, int word2Size){
    bool isSame = true;
    int word1Cnt = 0, word1ChCnt = 0, word1Len = strlen(word1[0]);
    int word2Cnt = 0, word2ChCnt = 0, word2Len = strlen(word2[0]);
    while(word1Cnt < word1Size && word2Cnt < word2Size) {
        if(word1[word1Cnt][word1ChCnt] != word2[word2Cnt][word2ChCnt]) {
            printf("%c %c\n", word1[word1Cnt][word1ChCnt], word2[word2Cnt][word2ChCnt]);
            isSame = false;
            break;
        }
        
        word1ChCnt++;
        word2ChCnt++;
        
        if(word1ChCnt >= word1Len) {
            word1Cnt++;
            if(word1Cnt < word1Size) {
                word1ChCnt = 0;
                word1Len = strlen(word1[word1Cnt]);
            }
        }
        
        if(word2ChCnt >= word2Len) {
            word2Cnt++;
            if(word2Cnt < word2Size) {
                word2ChCnt = 0;
                word2Len = strlen(word2[word2Cnt]);
            }
        }
    }
    
    if(word1Cnt < word1Size || word2Cnt < word2Size) {
        isSame = false;
    }
    
    if(word1ChCnt != word1Len || word2ChCnt != word2Len) {
        isSame = false;
    }
    
    
    return isSame;

}
