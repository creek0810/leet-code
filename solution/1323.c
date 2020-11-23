int maximum69Number (int num){
    int digit[5] = {0};
    int digitNum = 0;
    while(num) {
        digit[digitNum++] = num % 10;
        num /= 10;
    }
    int result = 0;
    bool changed = false;
    for(int i=digitNum - 1; i>=0; i--) {
        result *= 10;
        if(digit[i] == 6 && !changed) {
            result += 9;
            changed = true;
        } else {
            result += digit[i];
        }
    }
    return result;
}
