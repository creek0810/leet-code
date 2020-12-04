char * restoreString(char * s, int* indices, int indicesSize){
    char copy[101] = {0};
    strcpy(copy, s);
    for(int i=0; i<indicesSize; i++) {
        s[indices[i]] = copy[i];
    }
    return s;
}
