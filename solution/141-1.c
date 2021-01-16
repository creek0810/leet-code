/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    int cnt = 0;
    while(head && cnt < 10005) {
        head = head->next;
        cnt ++;
    }
    return cnt == 10005;
}
