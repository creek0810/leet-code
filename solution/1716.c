int totalMoney(int n){
    int result = 0;
    int weeks = n / 7;
    for(int i=0; i<weeks; i++) {
        // result += ((1 + i) + (7 + i)) * 7 / 2
        result += (56 + 14 * i) / 2;
    }
    int remain = n % 7;
    if(remain) {
        // result += ((1 + weeks) + (remain + weeks)) * 7 / 2
        result += (1 + remain +  2 * weeks) * remain / 2;
    }
    
    return result;
}
