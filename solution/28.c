int strStr(char * haystack, char * needle){
    int needleLen = strlen(needle);
    int haystackLen = strlen(haystack);
    if(needleLen == 0) {
        return 0;
    }
    if(needleLen > haystackLen) {
        return -1;
    }
    
    // start find
    for(int i=0; i<=haystackLen - needleLen; i++) {
        if(memcmp(haystack+i, needle, sizeof(char) * needleLen) == 0) {
            return i;
        }
    }
    return -1;
}
