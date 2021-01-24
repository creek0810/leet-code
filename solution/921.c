int minAddToMakeValid(char * S){
    int stack = 0;
    int tmp = 0;
    int i = 0;
    while(S[i]) {
        if(S[i] == '(') {
            stack ++;
        } else if(S[i] == ')') {
            if(stack) {
                stack --;
            } else {
                tmp ++;
            }
        }
        i++;
    }
    return tmp + stack;
}
