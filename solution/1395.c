

int numTeams(int* rating, int ratingSize){
    int result = 0;
    for(int i=0; i<ratingSize; i++) {
        for(int j=i+1; j<ratingSize; j++) {
            if(rating[i] < rating[j]) {
                for(int k=j+1; k<ratingSize; k++) {
                    if(rating[j] < rating[k]) {
                        result ++;
                    } 
                }
            } else if(rating[i] > rating[j]) {
                for(int k=j+1; k<ratingSize; k++) {
                    if(rating[j] > rating[k]) {
                        result ++;
                    } 
                }
            } 
        }
    }
    return result;
}
