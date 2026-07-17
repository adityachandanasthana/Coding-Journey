class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL)
            return head;

        vector<int> arr;

        ListNode* temp = head;

       
        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();

        k = k % n;

        vector<int> ans(n);

        
        for (int i = 0; i < n; i++) {
            ans[(i + k) % n] = arr[i];
        }

        temp = head;
        int i = 0;

        while (temp != NULL) {
            temp->val = ans[i];
            temp = temp->next;
            i++;
        }

        return head;
    }
};