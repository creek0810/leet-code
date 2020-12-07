int findNumbers(int* nums, int numsSize){
    int result = 0;
    for(int i=0; i<numsSize; i++) {
        int cnt = 0;
        while(nums[i] > 0) {
            nums[i] /= 10;
            cnt++;
        }
        if((cnt & 1) == 0) {
            result++;
        }
    }
    return result;
}
