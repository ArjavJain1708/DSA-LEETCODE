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
            ListNode* nextTemp = current->next;
            current->next = prev;
            prev = current;
            current = nextTemp;
        }
        ListNode* reversedHead = prev;

        // Step 2: Remove the n-th node from the reversed list
        // If n == 1, we are removing the first node of the reversed list
        if (n == 1) {
            ListNode* nodeToDelete = reversedHead;
            reversedHead = reversedHead->next;
            delete nodeToDelete;
        } 
        else {
            // Otherwise, traverse to the node just *before* the one we want to delete
            ListNode* curr = reversedHead;
            int i = 1;

        while (i < n - 1 && curr != nullptr && curr->next != nullptr){
                curr = curr->next;
                i++;
        }
            
            if (curr != nullptr && curr->next != nullptr) {
                ListNode* nodeToDelete = curr->next;
                curr->next = curr->next->next;
                delete nodeToDelete;
            }
        }

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