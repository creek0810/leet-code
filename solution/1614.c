int maxDepth(char * s){
    int stack = 0;
    int result = 0;
    for(int i=0; i<strlen(s); i++) {
        if(s[i] == '(') {
            stack++;
            result = (stack > result) ? stack : result;
        } else if(s[i] == ')') {
            stack--;
        }
    }
    
    return result;
}
