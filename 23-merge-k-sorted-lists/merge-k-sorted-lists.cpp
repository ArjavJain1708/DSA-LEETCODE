class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       
        int totalNodes = 0;
        for (int i = 0; i < lists.size(); i++) {
            ListNode* curr = lists[i];
            while (curr != nullptr) {
                totalNodes++;
                curr = curr->next;
            }
        }

        if (totalNodes == 0) return nullptr;

        ListNode* head = nullptr;
        ListNode* temp = nullptr;

        // Step 2: Loop totalNodes times to pick the global minimum one by one
        for (int step = 0; step < totalNodes; step++) {
            int smallest = INT_MAX;
            int minIndex = -1;

            // Find which list currently has the smallest head value
            for (int i = 0; i < lists.size(); i++) {
                if (lists[i] != nullptr) {
                    if (lists[i]->val < smallest) {
                        smallest = lists[i]->val;
                        minIndex = i;
                    }
                }
            }

            if (minIndex != -1) {
                // If this is the very first node, initialize head
                if (head == nullptr) {
                    head = lists[minIndex];
                    temp = head;
                } else {
                    temp->next = lists[minIndex];
                    temp = temp->next;
                }
                
                // Advance the pointer of the list we just pulled from
                lists[minIndex] = lists[minIndex]->next;
            }
        }

        return head;
    }
};