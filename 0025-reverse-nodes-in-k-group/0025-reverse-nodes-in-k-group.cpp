class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == NULL || k == 1)
            return head;

        ListNode* fast = head;

        // Check if k nodes exist
        for (int i = 1; i < k; i++) {
            if (fast == NULL || fast->next == NULL)
                return head;
            fast = fast->next;
        }

        ListNode* slow = head;
        ListNode* stop = fast->next;

        ListNode* prev = stop;
        ListNode* curr = slow;
        ListNode* next = NULL;

        // Reverse current group
        while (curr != stop) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Connect remaining groups
        slow->next = reverseKGroup(stop, k);

        return prev;
    }
};