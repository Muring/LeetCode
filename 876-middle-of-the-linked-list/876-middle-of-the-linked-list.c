/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *fastRunner = malloc(sizeof(struct ListNode));
    struct ListNode *slowRunner = malloc(sizeof(struct ListNode));
    
    fastRunner = head;
    slowRunner = head;
    
    while(true){
        if(fastRunner == NULL || fastRunner->next == NULL) {
            break;
        }
        slowRunner = slowRunner->next;
        fastRunner = fastRunner->next->next;
    }

    return slowRunner;
}