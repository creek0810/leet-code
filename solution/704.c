int search(int* nums, int numsSize, int target){
    int start = 0, end = numsSize;
    int result = -1;
    while(start < end) {
        int mid = (start + end) / 2;
        if(nums[mid] == target) {
            result = mid;
            break;
        } else if(nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return result;
}
