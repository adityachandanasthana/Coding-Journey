class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL)
            return head;

        // Find length
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        k %= len;           // Important optimization

        while(k != 0){
            ListNode* curr = head;
            ListNode* prev = NULL;

            while(curr->next != NULL){
                prev = curr;
                curr = curr->next;
            }

            curr->next = head;
            head = curr;
            prev->next = NULL;

            k--;
        }

        return head;
    }
};