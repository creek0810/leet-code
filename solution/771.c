int numJewelsInStones(char * J, char * S){
    int result = 0;
    int SLen = strlen(S);
    for(int i=0; i<strlen(J); i++) {
        for(int j=0; j<SLen; j++) {
            if(J[i] == S[j]) result++;
        }
    }
    return result;
}
