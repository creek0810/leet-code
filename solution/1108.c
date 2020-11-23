char * defangIPaddr(char * address){
    int size = sizeof(char) * (strlen(address) + 7);
    char *result = malloc(size);
    memset(result, 0, size);
    for(int i=0, j=0; i<strlen(address); i++) {
        if(address[i] == '.') {
            result[j++] = '[';
            result[j++] = '.';
            result[j++] = ']';  
        } else {
            result[j++] = address[i];
        }
    }
    return result;
}
