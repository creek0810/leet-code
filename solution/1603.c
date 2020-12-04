
typedef struct {
    int opacity;
    int top;
} Size;

typedef struct {
    Size small;
    Size medium;
    Size big;
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem* parkingSystem = calloc(1, sizeof(ParkingSystem));
    parkingSystem->small.opacity = small;
    parkingSystem->medium.opacity = medium;
    parkingSystem->big.opacity = big;
    return parkingSystem;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    // get size
    Size *curSize;
    switch(carType) {
        case 1:
            curSize = &(obj->big);
            break;
        case 2:
            curSize = &(obj->medium);
            break;
        case 3:        
            curSize = &(obj->small);
            break;
    }
    
    // full
    if(curSize->opacity == curSize->top) {
        return false;
    } 
    // add car successfully
    curSize->top += 1;
    return true;
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}

/**
 * Your ParkingSystem struct will be instantiated and called as such:
 * ParkingSystem* obj = parkingSystemCreate(big, medium, small);
 * bool param_1 = parkingSystemAddCar(obj, carType);
 
 * parkingSystemFree(obj);
*/
