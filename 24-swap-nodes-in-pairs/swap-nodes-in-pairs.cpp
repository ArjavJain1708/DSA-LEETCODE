/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=NULL;
        ListNode* prev=NULL;
        if(head==NULL){
            return NULL;
        }
        if(head&&head->next==NULL){
            return head;
        }
        temp=head;
        prev=NULL;
        head=head->next;
        ListNode* store=NULL;
        ListNode* store_prev=NULL;
        while(temp&&temp->next != NULL){
       prev=temp;
       temp=temp->next;
       store=temp->next;
       prev->next=store;
       temp->next=prev;
       if(store_prev){
       store_prev->next = temp;
       }
       
       store_prev=prev;
       temp=store;
            
    }
     return head;   
    }
};