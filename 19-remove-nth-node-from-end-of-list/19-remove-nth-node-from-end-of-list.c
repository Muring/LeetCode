/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *back = malloc(sizeof(struct ListNode));
    struct ListNode *front = malloc(sizeof(struct ListNode));
    struct ListNode *Node = malloc(sizeof(struct ListNode));
    int i, count = 0;
    
    //Node->val = -1;
    Node->next = head;
    back = Node;
    front = Node;
    
    for(i = 0 ; i < n ; i++)
        front = front->next;
    
    while(front->next != NULL){
        front = front->next;
        back = back->next;
    }
    back->next = back->next->next;
    
    return Node->next;
}