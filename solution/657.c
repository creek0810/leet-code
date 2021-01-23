bool judgeCircle(char * moves){
    int x = 0, y = 0;
    int i = 0;
    while(moves[i]) {
        if(moves[i] == 'U') {
            y ++;
        } else if(moves[i] == 'D') {
            y --;
        } else if(moves[i] == 'L') {
            x --;
        } else {
            x ++;
        }
        i++;
    }
    return (x == 0) && (y == 0);
}
