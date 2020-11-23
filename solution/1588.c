int sumOddLengthSubarrays(int* arr, int arrSize){
    // build dp table
    int dp[1005] = {0};
    for(int i=0; i<arrSize; i++) {
        dp[i+1] = dp[i] + arr[i];
    }
    
    // start add
    int result = 0;
    for(int windowSize=1; windowSize<=arrSize; windowSize+=2) {
        int start = 0;
        while(start + windowSize <= arrSize) {
            int end = start + windowSize;
            result += dp[end] - dp[start];  
            start ++;
        }
    }
    return result;
}
