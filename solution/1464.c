int maxProduct(int* nums, int numsSize){
    int result = 0;
    for(int i=0; i<numsSize; i++) {
        for(int j=i+1; j<numsSize; j++) {
            int tmp = (nums[i] - 1) * (nums[j] - 1);
            result = (tmp > result) ? tmp : result;
        }
    }
    return result;
}

