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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
   ListNode* prev = nullptr;
        ListNode* current = head;
        while (current != nullptr) {
            ListNode* nextTemp = current->next; // Save next node
            current->next = prev;               // Reverse the pointer
            prev = current;                     // Advance prev
            current = nextTemp;                 // Advance current
        }
        ListNode* reversedHead = prev;

        // Step 2: Remove the n-th node from the reversed list (which is the n-th from the start now)
        ListNode* dummy = new ListNode(0);
        dummy->next = reversedHead;
        
        ListNode* curr = dummy;
        int i = 1;
        while (i < n && curr != nullptr && curr->next != nullptr) {
            curr = curr->next;
            i++;
        }
        
        if (curr != nullptr && curr->next != nullptr) {
            ListNode* nodeToDelete = curr->next;
            curr->next = curr->next->next;
            delete nodeToDelete;
        }
        
        reversedHead = dummy->next;
        delete dummy;

        // Step 3: Reverse the list back to its original direction
        prev = nullptr;
        current = reversedHead;
        while (current != nullptr) {
            ListNode* nextTemp = current->next;
            current->next = prev;
            prev = current;
            current = nextTemp;
        }

        return prev;
    }
};