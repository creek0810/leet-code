struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* table[105] = {0};
    int size = 0;
    while(head) {
        table[size++] = head;
        head = head->next;
    }
    return table[size/2];
}
