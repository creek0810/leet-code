

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    *returnSize = n;
    char **result = malloc(sizeof(char*) * n);
    
    for(int i=1; i<=n; i++) {
        int three = i % 3;
        int five = i % 5;
        char *tmp;
        
        if(!three && !five) {
            tmp = malloc(sizeof(char) * 9);
            tmp = "FizzBuzz";
        } else if(!three) {
            tmp = malloc(sizeof(char) * 5);
            tmp = "Fizz";
        } else if(!five) {
            tmp = malloc(sizeof(char) * 5);
            tmp = "Buzz";
        } else {
            int cnt = 0;
            int tmpNum = i;
            while(tmpNum) {
                cnt++;
                tmpNum /= 10;
            }
            tmp = malloc(sizeof(char) * (cnt + 1));
            sprintf(tmp, "%d", i);
        }
        result[i-1] = tmp;
        
    }
    
    return result;
}
