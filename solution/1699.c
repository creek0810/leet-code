/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    // get the tail node of list2
    struct ListNode* tail = list2;
    while(tail->next) {
        tail = tail->next;
    }
    
    
    // start merge
    int cnt = 0;
    struct ListNode* curLoc = list1;
    struct ListNode* left = NULL;
    struct ListNode* right = NULL;
    
    while(!right) {
        // left
        if(cnt == a - 1) {
            left = curLoc;
        } 
        if(cnt == b) {
            right = curLoc->next;
        }
        curLoc = curLoc->next;
        cnt++;
    }
    left->next = list2;
    tail->next = right;
    
    
    return list1;
}
