
bool isVowel(char a) {
    return 
        a == 'a' ||
        a == 'e' || 
        a == 'i' || 
        a == 'o' || 
        a == 'u' || 
        a == 'A' || 
        a == 'E' || 
        a == 'I' || 
        a == 'O' || 
        a == 'U';
}

bool halvesAreAlike(char * s){
    int half = strlen(s) / 2;
    int vowelCnt[2] = {0};
    
    for(int i=0; i<half; i++) {
        if(isVowel(s[i])) {
            vowelCnt[0] ++;
        }
        if(isVowel(s[i + half])) {
            vowelCnt[1] ++;
        }
    }
    return vowelCnt[0] == vowelCnt[1];
}
