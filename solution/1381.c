typedef struct {
    int size;
    int top;
    int *arr;
} CustomStack;


CustomStack* customStackCreate(int maxSize) {
    CustomStack* result = malloc(sizeof(CustomStack));
    result->arr = malloc(sizeof(int) * maxSize);
    result->size = maxSize;
    result->top = 0;
    return result;
}

void customStackPush(CustomStack* obj, int x) {
    if(obj->top != obj->size) {
        obj->arr[(obj->top)++] = x;
    } 
}

int customStackPop(CustomStack* obj) {
    int result = -1;
    if(obj->top) {
        result = obj->arr[--(obj->top)];
    }
    return result;
}

void customStackIncrement(CustomStack* obj, int k, int val) {
    for(int i=0; i<k && i<obj->top; i++) {
        obj->arr[i] += val;
    }
}

void customStackFree(CustomStack* obj) {
    free(obj->arr);
    free(obj);
}

/**
 * Your CustomStack struct will be instantiated and called as such:
 * CustomStack* obj = customStackCreate(maxSize);
 * customStackPush(obj, x);
 
 * int param_2 = customStackPop(obj);
 
 * customStackIncrement(obj, k, val);
 
 * customStackFree(obj);
*/
