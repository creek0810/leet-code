int largestAltitude(int* gain, int gainSize){
    int result = 0;
    int curLoc = 0;
    for(int i=0; i<gainSize; i++) {
        curLoc += gain[i];
        result = (result > curLoc) ? result : curLoc;
    }
    return result;
}
