bool checkPerfectNumber(int num){
    if(num == 1) {
        return false;
    }
    
    int tmpSum = 1;
    for(int i=2; i<=sqrt(num); i++) {
        if(num % i == 0) {
            int quo = num / i;
            tmpSum += i;
            if(quo != i) {
                tmpSum += quo;
            }
        }
    }
    
    return tmpSum == num;
}
