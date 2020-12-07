char * removeOuterParentheses(char * S){
    // init var
    bool isInner = false;
    int par = 0;
    char tmp[10001] = {0};

    for(int i=0, j=0; i<strlen(S); i++) {
        if(!isInner) {
            isInner = true;
        } else {
            if(par == 0 && S[i] == ')') {
                isInner = false;
            } else {
                tmp[j++] = S[i];
                if(S[i] == '(') {
                    par += 1;
                } else {
                    par -= 1;
                }
            } 
        }
    }
    memset(S, 0, sizeof(char) * strlen(S));
    strcpy(S, tmp);
    return S;
}
