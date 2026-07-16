class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == NULL) return NULL;

        vector<int> arr;
        ListNode* temp = head;

       
        while (temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

      
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        vector<int> ans;
        for (int i = 0; i < arr.size(); i++) {
            if (mp[arr[i]] == 1) {
                ans.push_back(arr[i]);
            }
        }
        if (ans.size() == 0)
            return NULL;
            
        ListNode* newHead = new ListNode(ans[0]);
        ListNode* curr = newHead;

        for (int i = 1; i < ans.size(); i++) {
            curr->next = new ListNode(ans[i]);
            curr = curr->next;
        }

        return newHead;
    }
};