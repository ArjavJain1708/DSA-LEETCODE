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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int l = 0;
        ListNode* curr = head;
        while (curr != nullptr) {
            l++;
            curr = curr->next;
        }

        ListNode* p;
        ListNode* q;
q=NULL;
int j=0;
ListNode* temp=NULL;
p=head;
ListNode* newHead = NULL;       
ListNode* prevGroupTail = NULL;

p=head;
        for(int i=0;i<l/k;i++){
            ListNode* groupHead = p;
            j=0;
            q=NULL;
          while(j<k){
           
            temp=p->next;
           p->next=q;
           q=p;
           p=temp;
           j++;
          }
          if (newHead == NULL) {
                newHead = q;
            } else {
                
                prevGroupTail->next = q;
            }
            
            // Update prevGroupTail to be the old groupHead (which is now the tail)
            prevGroupTail = groupHead;
         

        }
        ListNode* temp2=newHead;
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp;
    return newHead;}
};