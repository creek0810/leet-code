int subtractProductAndSum(int n){
    int copy = n;
    int product = 1;
    int sum = 0;
    // start product
    while(copy) {
        product *= copy % 10;
        copy /= 10;
    }
    // start sum
    copy = n;
    while(copy) {
        sum += copy % 10;
        copy /= 10;
    }
    
    return product - sum;
}
