int peakIndexInMountainArray(int* arr, int arrSize){
    int peak = 0;
    for(int i=0; i<arrSize; i++) {
        peak = i;
        if(i != 0 && i < arrSize-1) {
            if (arr[i-1] < arr[i] && arr[i+1] < arr[i]) {
                break;
            }
        }
    }
    return peak;
}
