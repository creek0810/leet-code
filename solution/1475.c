int calcDiscount(int* prices, int pricesSize, int idx) {
    int result = 0;
    for(int i=idx+1; i<pricesSize; i++) {
        if(prices[i] <= prices[idx]) {
            result = prices[i];
            break;
        }
    }
    return result;
}
int* finalPrices(int* prices, int pricesSize, int* returnSize){
    int *result = malloc(sizeof(int) * pricesSize);
    *returnSize = pricesSize;
    for(int i=0; i<pricesSize; i++) {
        result[i] = prices[i] - calcDiscount(prices, pricesSize, i); 
    }
    
    return result;
}
