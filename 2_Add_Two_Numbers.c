#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int sum, temp =0;
    struct ListNode* arr1 = l1;
    struct ListNode* arr2 = l2;
    struct ListNode* arr1_prev = l1;

    //l1이 l2보다 길거나 그 반대일 경우
    if(l1 == NULL) return l2;
    else if(l2 == NULL) return l1;

    while(arr1 !=NULL && arr2 != NULL){
        sum = temp + arr1->val + arr2->val;
        if(sum>=10){
            temp = 1;
            sum = sum % 10;
        }
        else
            temp = 0;
        arr1->val = sum;

        arr1_prev = arr1;
        arr1 = arr1->next;
        arr2 = arr2->next;
    }

    if(arr2 != NULL && arr1 == NULL){
        arr1_prev->next = arr2;
        arr1 = arr2;
    }

    if(temp == 1 && arr1 != NULL){
        arr1->val += 1;
        temp = 0;

        if(arr1->val >= 10){
            temp = 1;
            arr1->val = arr1->val%10;
        }
        else
            temp = 0;
        
        arr1_prev = arr1;
        arr1 = arr1->next;

        while (temp == 1 && arr1 != NULL){
            arr1->val += 1;
            if(arr1->val >= 10){
                temp = 1;
                arr1->val = arr1->val%10;
            }
            else
                temp = 0;

            arr1_prev = arr1;
            arr1 = arr1->next;
        }
    }

    if(temp == 1){
        struct ListNode* arr = (struct ListNode*)malloc(sizeof(struct ListNode));
        arr->next = NULL;
        arr->val = 1;
        arr1_prev->next = arr;
    }

    return l1;
}

int main(){
    
}