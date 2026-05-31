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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode* a=l1;
       ListNode* b=l2;
       ListNode* head=NULL;
       ListNode* temp;
       
     int carry=0;
     int sum=0;
        while(a!=NULL&&b!=NULL){
          sum=0;
          sum = a->val+b->val+carry;

          if(sum>=10){
           ListNode* l3=new ListNode (sum%10,head);
           head=l3;
           carry=1;
        }
        if(sum<10){
            ListNode* l3=new ListNode (sum%10,head);
           head=l3;
           carry=0;
        }

        a=a->next;
        b=b->next;
        }
        sum=0;
       if (a!=NULL){
        while(a!=NULL){
             sum=0;
        sum = carry+ a->val;
        if(sum>=10){
          ListNode* l3=new ListNode(sum%10,head);  
           head=l3;
           carry=1;
    
          
        }
         if(sum<10){
            ListNode* l3=new ListNode(sum%10,head);
           head=l3;
           carry=0;
        }
        a=a->next;
        }
        sum=0;
        
       }

         if (b!=NULL){
        while(b!=NULL){
             sum=0;
        sum = carry+ b->val;
        if(sum>=10){
          ListNode* l3=new ListNode(sum%10,head);  
           head=l3;
           carry=1;
    
          
        }
         if(sum<10){
            ListNode* l3=new ListNode(sum%10,head);
           head=l3;
           carry=0;
        }
        b=b->next;
        }
        sum=0;
        
       }
       if(carry==1){
        ListNode* l3=new ListNode(1,head);
        head=l3;
       }
      
     
       
    a = head;
    b = a;
    ListNode* c = NULL;
    while (a != NULL) {
        a = a->next;
        b->next = c;
        c = b;
        b = a;
    }
   head=c;

    
   return head; }
};