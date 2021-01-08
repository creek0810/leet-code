int countVowelStrings(int n){
    int dp[52][5] = {0};
    for(int i=0; i<5; i++) {
        dp[1][i] = 1;
    }
    for(int i=2; i<52; i++) {
        dp[i][4] = 1;
        for(int j=3; j>=0; j--) {
            dp[i][j] = dp[i][j+1] + dp[i-1][j];
        }
    }
    return dp[n+1][0];
}
