

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize){
    int result = 0;
    for(int i=1; i<pointsSize; i++) {
        int x = abs(points[i][0] - points[i-1][0]);
        int y = abs(points[i][1] - points[i-1][1]);
        if(x && y) {
            int min = (y < x) ? y : x;
            result += min + (y - min) + (x - min);
        } else {
            result += x + y;
        }
    }
    return result;
}
