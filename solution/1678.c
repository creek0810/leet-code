char * interpret(char * command){
    char *result = calloc(1, sizeof(char) * 105);
    int idx = 0;
    int resultIdx = 0;
    while(idx < strlen(command)) {
        if(command[idx] == 'G') {
            result[resultIdx++] = 'G';
            idx ++;
        } else {
            // ()
            if(command[idx + 1] == ')') {
                result[resultIdx++] = 'o';
                idx += 2;
            // (al)
            } else {
                result[resultIdx++] = 'a';
                result[resultIdx++] = 'l';
                idx += 4;  
            }
        }
    }
    return result;
}
