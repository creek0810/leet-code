bool kLengthApart(int* nums, int numsSize, int k){
    int dist = 100005;
    for(int i=0; i<numsSize; i++) {
        if(nums[i] == 1) {
            if(dist < k) {
                return false;
            }
            dist = 0;
        } else {
            dist++;
        }
    }
    return true;
}
