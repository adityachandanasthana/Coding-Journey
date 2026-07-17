class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == NULL || k == 1)
            return head;

        ListNode* fast = head;

        
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

        
        while (curr != stop) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        
        slow->next = reverseKGroup(stop, k);

        return prev;
    }
};