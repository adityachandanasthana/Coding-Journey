class Solution {
public:
    void deleteNode(ListNode* node) {

        // Edge case: node hi NULL hai
        if (node == NULL) {
            return;
        }

        // Edge case: node last node hai
        if (node->next == NULL) {
            return;
        }

        // Next node ki value current node mein copy
        node->val = node->next->val;

        // Next node ko skip
        node->next = node->next->next;
    }
};